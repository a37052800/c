#include <iostream>
#include <windows.h>
using namespace std;

HHOOK hMouseHook;

LRESULT CALLBACK mouseProc(int nCode, WPARAM wParam, LPARAM lParam)
{
    MOUSEHOOKSTRUCT *pMouseStruct = (MOUSEHOOKSTRUCT *)lParam;
    if (pMouseStruct != NULL)
    {
        if ((wParam == WM_RBUTTONUP) && (pMouseStruct->wHitTestCode == HTMINBUTTON))
        {
            cout << "\n\n\n\n\ndown\n\n\n\n";
        }
        cout << pMouseStruct->pt.x << "," << pMouseStruct->pt.y << endl;
    }
    return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
}

int main()
{
    HINSTANCE hInstance = GetModuleHandle(NULL);

    hMouseHook = SetWindowsHookEx(WH_MOUSE, mouseProc, hInstance, 0);

    MSG message;
    GetMessage(&message, NULL, 0, 0);

    UnhookWindowsHookEx(hMouseHook);
    return 0;
}