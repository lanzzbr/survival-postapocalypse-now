#include "Hook.h"
#include "Menu.h"
#include "vars.h"

inline ImFont* pRoboto14;

DWORD_PTR* pSwapChainVtable = NULL;
DWORD_PTR* pContextVTable = NULL;
DWORD_PTR* pDeviceVTable = NULL;

d3d11_present_hook hook_present;
ID3D11RenderTargetView* render_target_view;
ID3D11Device* device;
IDXGISwapChain* swap_chain;
ID3D11DeviceContext* context;

void SetupFont() {
	ImGuiIO& io = ImGui::GetIO();
	pRoboto14 = ImGui::GetIO().Fonts->AddFontFromFileTTF("C:\\WINDOWS\\FONTS\\impact.ttf", 16.0f, NULL, ImGui::GetIO().Fonts->GetGlyphRangesCyrillic());
}

void SetupColors() {
	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_Text] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);

	colors[ImGuiCol_WindowBg] = ImVec4(173.f, 138.f, 9.f, 0.83f);
	colors[ImGuiCol_ChildBg] = ImVec4(1.00f, 0.73f, 0.91f, 0.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.97f, 0.44f, 0.82f, 0.94f);

	colors[ImGuiCol_Border] = ImVec4(0.43f, 0.34f, 0.34f, 0.50f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);

	colors[ImGuiCol_FrameBg] = ImVec4(0.96f, 0.92f, 0.56f, 0.54f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.97f, 0.94f, 0.69f, 0.40f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.96f, 0.92f, 0.56f, 0.67f);

	colors[ImGuiCol_TitleBg] = ImVec4(0.00f, 11.0f, 34.0f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.0f, 11.f, 34.f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.74f, 0.95f, 1.00f, 1.00f);

	colors[ImGuiCol_MenuBarBg] = ImVec4(1.00f, 0.00f, 0.00f, 0.61f);

	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.16f, 0.29f, 0.48f, 0.54f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);

	colors[ImGuiCol_CheckMark] = ImVec4(0.74f, 0.95f, 1.00f, 1.00f);

	colors[ImGuiCol_SliderGrab] = ImVec4(0.24f, 0.52f, 0.88f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);

	colors[ImGuiCol_Button] = ImVec4(0.26f, 0.59f, 0.98f, 0.40f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);

	colors[ImGuiCol_Header] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
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

HRESULT Hook::hook_d3d11_present(IDXGISwapChain* swap_chain, UINT sync_interval, UINT flags)
{
	if (!initonce)
	{
		if (SUCCEEDED(swap_chain->GetDevice(__uuidof(ID3D11Device), (void**)&device))) {
			swap_chain->GetDevice(__uuidof(device), (void**)&device);
			device->GetImmediateContext(&context);
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO();
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
			io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

			ImGui::StyleColorsClassic();
			ImGui_ImplWin32_Init(hWnd);
			ImGui_ImplDX11_Init(device, context);
			ImGui_ImplDX11_CreateDeviceObjects();
			SetupFont();
			SetupColors();
			vars::quale_menu = Menu(context);
			vars::quale_menu = Menu(context);
			initonce = true;
		}
		else
			return hook_present(swap_chain, sync_interval, flags);
	}

	ImGuiIO io = ImGui::GetIO();

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();
	//pMenu->Render();
	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return hook_present(swap_chain, sync_interval, flags);
}

LRESULT CALLBACK Hook::DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

const int MultisampleCount = 1;

DWORD __stdcall Init(LPVOID)
{
	HMODULE hDXGIDLL = 0;
	do
	{
		hDXGIDLL = GetModuleHandle(L"dxgi.dll");
		Sleep(100);
	} while (!hDXGIDLL);
	Sleep(100);

	IDXGISwapChain* pSwapChain;

	WNDCLASSEXA wc = { sizeof(WNDCLASSEX), CS_CLASSDC, Hook::DXGIMsgProc, 0L, 0L, GetModuleHandleA(NULL), NULL, NULL, NULL, NULL, "DX", NULL };
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
		&swap_chain,
		&device,
		&obtainedLevel,
		&context)))
	{
		MessageBox(hWnd, L"Failed to create directX device and swapchain!", L"Error", MB_ICONERROR);
		return NULL;
	}


	pSwapChainVtable = (DWORD_PTR*)swap_chain;
	pSwapChainVtable = (DWORD_PTR*)pSwapChainVtable[0];

	pContextVTable = (DWORD_PTR*)context;
	pContextVTable = (DWORD_PTR*)pContextVTable[0];

	pDeviceVTable = (DWORD_PTR*)device;
	pDeviceVTable = (DWORD_PTR*)pDeviceVTable[0];

	hook_present = (d3d11_present_hook)(DWORD_PTR*)pSwapChainVtable[8];
	

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(LPVOID&)hook_present, (PBYTE)Hook::hook_d3d11_present);
	DetourTransactionCommit();

	DWORD dwOld;
	VirtualProtect(hook_present, 2, PAGE_EXECUTE_READWRITE, &dwOld);

	while (true) {
		Sleep(10);
	}

	device->Release();
	context->Release();
	pSwapChain->Release();

	return NULL;
}

BOOL __stdcall DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH: // A process is loading the DLL.
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, Init, NULL, 0, NULL);
		break;

	case DLL_PROCESS_DETACH: // A process unloads the DLL.
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&(LPVOID&)hook_present, (PBYTE)Hook::hook_d3d11_present);
		DetourTransactionCommit();
		break;
	}
	return TRUE;
}