#include <windows.h>
#include "pch.h"
#include "winhook.h"

HHOOK hMouseHook;

LRESULT CALLBACK mouseProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	MOUSEHOOKSTRUCT* pMouseStruct = (MOUSEHOOKSTRUCT*)lParam;
	if (pMouseStruct != NULL)
	{
		if ((wParam == WM_RBUTTONUP) && (pMouseStruct->wHitTestCode == HTMINBUTTON))
		{
			MessageBox(NULL, L"HOTKEY", L"notice", MB_OK);
		}
	}
	return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
}

BOOL __declspec(dllexport) RegisterHook(HMODULE hLib)
{
	hMouseHook = SetWindowsHookEx(WH_MOUSE, mouseProc, hLib, 0);
	return TRUE;
}
