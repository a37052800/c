#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    HWND window;
    window = FindWindowA(NULL, "*��.txt - �O�ƥ�");         //�M�䵡�fHWND(���W,���D)
    FlashWindow(window, true);                              //�{�{����(HWND,�ʵe)
    SetActiveWindow(window);                                //�E������
    SendMessageA(window, WM_SYSCOMMAND, SC_MAXIMIZE, NULL); //�̤j��(�Y�p�ɤ~����)
    MoveWindow(window, 200, 200, 400, 400, false);          //���ʵ��f(HWND,x0,y0,W,H,�O�_��ø)
    window = FindWindowExA(window, NULL, "Edit", NULL);     //�M��l���fHWND(����HWND,�l��HWND,���W,���D)
    SendMessageA(window, WM_CHAR, WPARAM('C'), NULL);
    SendMessageA(window, WM_CHAR, 43, 3);      //(HWND,MSG,ASCII,NUM)
    SendMessageA(window, WM_KEYDOWN, 8, NULL); //Backspace
    //SendMessageA(window, WM_COPY, NULL, NULL); //�V�����ǰe�T��(�ƻs)
    /*window = GetForegroundWindow(); //���o��e����HWND
    CloseWindow(window); //�̤p��
    OpenIcon(window); //�̤j��*/

    cout << window;
}