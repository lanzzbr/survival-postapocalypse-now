#include "includes.h"
#include "vars.h"
#include "ESP.h"

typedef HRESULT(__stdcall* D3D11PresentHook) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef HRESULT(__stdcall* D3D11ResizeBuffersHook) (IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);

D3D11PresentHook phookD3D11Present = NULL;
D3D11ResizeBuffersHook phookD3D11ResizeBuffers = NULL;

ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;

DWORD_PTR* pSwapChainVtable = NULL;
DWORD_PTR* pContextVTable = NULL;
DWORD_PTR* pDeviceVTable = NULL;

ID3D11RenderTargetView* RenderTargetView = NULL;

inline ImFont* pRoboto14;
const int menu_key = VK_HOME;
HWND g_hwnd;
//IFW1Factory* pFW1Factory = NULL;
//IFW1FontWrapper* pFontWrapper = NULL;
ESP esp = ESP();
DeadLootBoxESP dead_loot_box = DeadLootBoxESP();
Admin admin = Admin();
Cars cars = Cars();
Grenade grenade = Grenade();
AirDrop airdrop = AirDrop();
//wndproc
HWND window = nullptr;
bool ShowMenu = false;
static WNDPROC OriginalWndProcHandler = nullptr;

bool firstTime = true;

UINT vps = 1;
D3D11_VIEWPORT viewport;
float ScreenCenterXx;
float ScreenCenterYx;

HRESULT hr;

bool initOnce = false;

DWORD WINAPI quale_thread(LPVOID lpvReserved) {
	while (!initOnce) {
		ImGuiIO& io = ImGui::GetIO();

		HWND hwnd = window;

		POINT mousePosition;
		GetCursorPos(&mousePosition);
		ScreenToClient(hwnd, &mousePosition);

		io.MousePos.x = mousePosition.x;
		io.MousePos.y = mousePosition.y;

		if (GetAsyncKeyState(VK_LBUTTON))
			io.MouseDown[0] = true;
		else
			io.MouseDown[0] = false;

		if (GetAsyncKeyState(menu_key) & 0x1) {
			vars::quale_menu.isOpen = !(vars::quale_menu.isOpen);
		}

		if (vars::quale_menu.player_esp)
		{
			esp.toggled = true;
		}
		else {
			esp.toggled = false;
		}

		if (vars::quale_menu.dead_loot_box)
		{
			dead_loot_box.toggled = true;
		}
		else {
			dead_loot_box.toggled = false;
		}
		
		if (vars::quale_menu.admin_esp)
		{
			admin.toggled = true;
		}
		else
		{
			admin.toggled = false;
		}

		if (vars::quale_menu.cars)
		{
			cars.toggled = true;
		}
		else {
			cars.toggled = false;
		}

		if (vars::quale_menu.grenade_esp)
		{
			grenade.toggled = true;
		}
		else {
			grenade.toggled = false;
		}

		if (vars::quale_menu.air_drop)
		{
			airdrop.toggled = true;
		}
		else {
			airdrop.toggled = false;
		}
	}
	return NULL;
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT CALLBACK hWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	ImGuiIO& io = ImGui::GetIO();
	POINT mPos;
	GetCursorPos(&mPos);
	ScreenToClient(window, &mPos);
	ImGui::GetIO().MousePos.x = mPos.x;
	ImGui::GetIO().MousePos.y = mPos.y;

	if (uMsg == WM_KEYUP)
	{
		if (wParam == VK_INSERT)
		{
			if (ShowMenu)
				io.MouseDrawCursor = true;
			else
				io.MouseDrawCursor = false;
		}
	}

	if (ShowMenu)
	{
		ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
		return true;
	}

	return CallWindowProc(OriginalWndProcHandler, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hookD3D11ResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	ImGui_ImplDX11_InvalidateDeviceObjects();
	if (nullptr != RenderTargetView) { RenderTargetView->Release(); RenderTargetView = nullptr; }

	HRESULT toReturn = phookD3D11ResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

	ImGui_ImplDX11_CreateDeviceObjects();

	return toReturn;
}

void SetupFont() {
	ImGuiIO& io = ImGui::GetIO();
	pRoboto14 = ImGui::GetIO().Fonts->AddFontFromFileTTF("C:\\WINDOWS\\FONTS\\Verdana.ttf", 16.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
}

void SetupColors() {
	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);

	colors[ImGuiCol_WindowBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.70f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.0f, 0.0f, 0.0f, 0.70f);

	colors[ImGuiCol_Border] = ImVec4(0.0f, 0.0f, 0.0f, 0.50f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.0f, 0.0f, 0.0f, 0.00f);

	colors[ImGuiCol_FrameBg] = ImVec4(0.5f, 0.5f, 0.5f, 0.54f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.5f, 0.5f, 0.5f, 0.40f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.5f, 0.5f, 0.5f, 0.67f);

	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 0.0f, 0.0f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.0f, 0.f, 0.f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.0f, 0.0f, 0.00f, 1.00f);

	colors[ImGuiCol_MenuBarBg] = ImVec4(48.f, 48.f, 47.f, 0.61f);

	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.16f, 0.29f, 0.48f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);

	colors[ImGuiCol_CheckMark] = ImVec4(0.74f, 0.95f, 1.00f, 1.00f);

	colors[ImGuiCol_SliderGrab] = ImVec4(0.24f, 0.52f, 0.88f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);

	colors[ImGuiCol_Button] = ImVec4(0.17f, 0.18f, 0.2f, 1.0f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.6f, 0.67f, 0.71f, 1.0f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.6f, 0.67f, 0.71f, 1.0f);

	colors[ImGuiCol_Header] = ImVec4(0.83f, 0.83f, 0.82f, 0.00f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.74f, 0.95f, 1.00f, 0.80f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.74f, 0.95f, 1.00f, 1.00f);

	colors[ImGuiCol_Separator] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);

	colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);

	colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);

	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
	colors[ImGuiCol_ModalWindowDarkening] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
}

HRESULT __stdcall hookD3D11Present(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (firstTime)
	{
		firstTime = false; //only once

		//get device
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			//SwapChain = pSwapChain;
			pSwapChain->GetDevice(__uuidof(pDevice), (void**)&pDevice);
			pDevice->GetImmediateContext(&pContext);
		}
		//HRESULT createFont = FW1CreateFactory(FW1_VERSION, &pFW1Factory);
		//createFont = pFW1Factory->CreateFontWrapper(pDevice, L"Courier", &pFontWrapper);
		//pFW1Factory->Release();

		//imgui
		DXGI_SWAP_CHAIN_DESC sd;
		pSwapChain->GetDesc(&sd);
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO(); (void)io;
		ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantTextInput || ImGui::GetIO().WantCaptureKeyboard; //control menu with mouse
		io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls
		window = sd.OutputWindow;

		//wndprochandler
		OriginalWndProcHandler = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)hWndProc);

		ImGui_ImplWin32_Init(window);
		ImGui_ImplDX11_Init(pDevice, pContext);
		SetupFont();
		ImGui_ImplDX11_CreateDeviceObjects();
		SetupColors();
		//vars::quale_menu = Menu(pContext);
		esp = ESP();
		dead_loot_box = DeadLootBoxESP();
		admin = Admin();
		cars = Cars();
		grenade = Grenade();
		airdrop = AirDrop();
		CreateThread(NULL, 0, quale_thread, NULL, 0, NULL);
		ImGui::GetIO().ImeWindowHandle = window;
	}

	if (RenderTargetView == NULL)
	{
		pContext->RSGetViewports(&vps, &viewport);
		ScreenCenterXx = viewport.Width / 2.0f;
		ScreenCenterYx = viewport.Height / 2.0f;
		ID3D11Texture2D* backbuffer = NULL;
		hr = pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&backbuffer);

		hr = pDevice->CreateRenderTargetView(backbuffer, NULL, &RenderTargetView);
		backbuffer->Release();
	}
	else
		pContext->OMSetRenderTargets(1, &RenderTargetView, NULL);

	//imgui
	ImGui_ImplWin32_NewFrame();
	ImGui_ImplDX11_NewFrame();
	ImGui::NewFrame();
	//ImGui::GetStyle().WindowRounding = 0.0f;

	vars::quale_menu.Render();
	esp.Render();
	dead_loot_box.Render();
	admin.Render();
	cars.Render();
	grenade.Render();
	airdrop.Render();
	//ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return phookD3D11Present(pSwapChain, SyncInterval, Flags);
}

const int MultisampleCount = 1; // Set to 1 to disable multisampling
LRESULT CALLBACK DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) { return DefWindowProc(hwnd, uMsg, wParam, lParam); }
DWORD __stdcall InitHooks(LPVOID)
{
	HMODULE hDXGIDLL = 0;
	do
	{
		hDXGIDLL = GetModuleHandle(L"dxgi.dll");
		Sleep(100);
	} while (!hDXGIDLL);
	Sleep(100);

	IDXGISwapChain* pSwapChain;

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, DXGIMsgProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
	RegisterClassExA(&wc);
	HWND hWnd = CreateWindowA("DX", NULL, WS_OVERLAPPEDWINDOW, 100, 100, 300, 300, NULL, NULL, wc.hInstance, NULL);

	D3D_FEATURE_LEVEL requestedLevels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_1 };
	D3D_FEATURE_LEVEL obtainedLevel;
	ID3D11Device* d3dDevice = nullptr;
	ID3D11DeviceContext* d3dContext = nullptr;

	DXGI_SWAP_CHAIN_DESC scd;
	ZeroMemory(&scd, sizeof(scd));
	scd.BufferCount = 1;
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	scd.BufferDesc.Scaling = DXGI_MODE_SCALING_UNSPECIFIED;
	scd.BufferDesc.ScanlineOrdering = DXGI_MODE_SCANLINE_ORDER_UNSPECIFIED;
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	scd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
	scd.OutputWindow = hWnd;
	scd.SampleDesc.Count = MultisampleCount;
	scd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;
	scd.Windowed = ((GetWindowLongPtr(hWnd, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

	scd.BufferDesc.Width = 1;
	scd.BufferDesc.Height = 1;
	scd.BufferDesc.RefreshRate.Numerator = 0;
	scd.BufferDesc.RefreshRate.Denominator = 1;

	UINT createFlags = 0;
#ifdef _DEBUG
	createFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

	IDXGISwapChain* d3dSwapChain = 0;

	if (FAILED(D3D11CreateDeviceAndSwapChain(
		nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		createFlags,
		requestedLevels,
		sizeof(requestedLevels) / sizeof(D3D_FEATURE_LEVEL),
		D3D11_SDK_VERSION,
		&scd,
		&pSwapChain,
		&pDevice,
		&obtainedLevel,
		&pContext)))
	{
		MessageBox(hWnd, L"Failed to create directX device and swapchain!", L"Error", MB_ICONERROR);
		return NULL;
	}


	pSwapChainVtable = (DWORD_PTR*)pSwapChain;
	pSwapChainVtable = (DWORD_PTR*)pSwapChainVtable[0];

	pContextVTable = (DWORD_PTR*)pContext;
	pContextVTable = (DWORD_PTR*)pContextVTable[0];

	pDeviceVTable = (DWORD_PTR*)pDevice;
	pDeviceVTable = (DWORD_PTR*)pDeviceVTable[0];

	phookD3D11Present = (D3D11PresentHook)(DWORD_PTR*)pSwapChainVtable[8];
	phookD3D11ResizeBuffers = (D3D11ResizeBuffersHook)(DWORD_PTR*)pSwapChainVtable[13];

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(LPVOID&)phookD3D11Present, (PBYTE)hookD3D11Present);
	DetourAttach(&(LPVOID&)phookD3D11ResizeBuffers, (PBYTE)hookD3D11ResizeBuffers);
	//DetourAttach(&(LPVOID&)phookD3D11CreateQuery, (PBYTE)hookD3D11CreateQuery);
	DetourTransactionCommit();

	DWORD dwOld;
	VirtualProtect(phookD3D11Present, 2, PAGE_EXECUTE_READWRITE, &dwOld);

	while (true) {
		Sleep(10);
	}

	pDevice->Release();
	pContext->Release();
	pSwapChain->Release();

	return NULL;
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH: // A process is loading the DLL.
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, InitHooks, NULL, 0, NULL);
		break;

	case DLL_PROCESS_DETACH: // A process unloads the DLL.
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(LPVOID&)phookD3D11Present, (PBYTE)hookD3D11Present);
		DetourDetach(&(LPVOID&)phookD3D11ResizeBuffers, (PBYTE)hookD3D11ResizeBuffers);
		DetourTransactionCommit();
		break;
	}
	return TRUE;
}