#pragma once
#include "includes.h"

typedef HRESULT(__stdcall* d3d11_present_hook)(IDXGISwapChain* swap_chain, UINT sync_interval, UINT flags);
//typedef HRESULT(__stdcall* d3d11_resize_buffers_hook)(IDXGISwapChain* swap_chain, UINT buffer_count, UINT width, UINT height, DXGI_FORMAT new_format, UINT swap_chain_flags);

class Hook {
public:
	static HRESULT WINAPI hook_d3d11_present(IDXGISwapChain* swap_chain, UINT sync_interval, UINT flags);
	static LRESULT CALLBACK DXGIMsgProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
private:
	static inline WNDPROC wnd_proc;
	static inline HWND hWnd;
	static inline bool initonce = false;
};