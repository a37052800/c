#include <windows.h>
int main()
{
    if (RegisterHotKey(NULL, 1, NULL, VK_F4))
    {
        MessageBox(NULL, "Set Done", "notice", MB_OK | MB_ICONASTERISK);
    }
    MSG msg = {0};
    while (GetMessage(&msg, NULL, WM_HOTKEY, WM_HOTKEY) != 0)
    {
        if (msg.message == WM_HOTKEY)
        {
            MessageBox(NULL, "HOTKEY", "notice", MB_OK);
        }
    }
}