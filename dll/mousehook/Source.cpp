#include "Header.h"

HHOOK hMouseHook;
HWND _hLastHit;

LRESULT CALLBACK mouseProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	if (nCode >= 0) {
		if (wParam == WM_NCRBUTTONDOWN || wParam == WM_NCRBUTTONUP) {
			MOUSEHOOKSTRUCT* info = (MOUSEHOOKSTRUCT*)lParam;
			BOOL isHit = (info->wHitTestCode == HTMINBUTTON);
			if (wParam == WM_NCRBUTTONDOWN && isHit) {
				_hLastHit = info->hwnd;
				return 1;
			}
			else if (wParam == WM_NCRBUTTONUP && isHit) {
				if (info->hwnd == _hLastHit) {
					//CallNextHookEx(hMouseHook, nCode, wParam, lParam);
					MessageBox(NULL, L"CLICK", L"notice", MB_OK);
				}
				_hLastHit = NULL;
				return 1;
			}
			else {
				_hLastHit = NULL;
			}
		}
		else if (wParam == WM_RBUTTONDOWN || wParam == WM_RBUTTONUP) {
			_hLastHit = NULL;
		}
	}
	return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
}

DLLEXPORT BOOL RegisterHook(HMODULE hLib)
{
	hMouseHook = SetWindowsHookEx(WH_MOUSE, mouseProc, hLib, 0);
	return TRUE;
}