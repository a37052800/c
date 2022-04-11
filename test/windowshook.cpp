#include <iostream>
#include <windows.h>
typedef BOOL (*fp)(HMODULE);
using namespace std;

HMODULE hDll;

int main()
{
    hDll = LoadLibrary("mousehook.dll");
    if(hDll == 0)
    {
        cout << "failload";
        return 1;
    }
    fp regist = (fp)GetProcAddress(hDll, "RegisterHook");
    if(regist == NULL)
    {
        FreeLibrary(hDll);
        cout << "failfind";
        return 1;
    }
    regist(hDll);

    //MSG message;
    //GetMessage(&message, NULL, 0, 0);
    /*while (GetMessage(&message, NULL, 0, 0))
        ;*/
    Sleep(12000);
    FreeLibrary(hDll);
    return 0;
}