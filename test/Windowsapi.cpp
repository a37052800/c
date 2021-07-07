#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    HWND window;
    window = FindWindowA(NULL, "*文.txt - 記事本");         //尋找窗口HWND(類名,標題)
    FlashWindow(window, true);                              //閃爍視窗(HWND,動畫)
    SetActiveWindow(window);                                //激活視窗
    SendMessageA(window, WM_SYSCOMMAND, SC_MAXIMIZE, NULL); //最大化(縮小時才有效)
    MoveWindow(window, 200, 200, 400, 400, false);          //移動窗口(HWND,x0,y0,W,H,是否重繪)
    window = FindWindowExA(window, NULL, "Edit", NULL);     //尋找子窗口HWND(父窗HWND,子窗HWND,類名,標題)
    SendMessageA(window, WM_CHAR, WPARAM('C'), NULL);
    SendMessageA(window, WM_CHAR, 43, 3);      //(HWND,MSG,ASCII,NUM)
    SendMessageA(window, WM_KEYDOWN, 8, NULL); //Backspace
    //SendMessageA(window, WM_COPY, NULL, NULL); //向視窗傳送訊息(複製)
    /*window = GetForegroundWindow(); //取得當前視窗HWND
    CloseWindow(window); //最小化
    OpenIcon(window); //最大化*/

    cout << window;
}