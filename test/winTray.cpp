#include <windows.h>  
#include <tchar.h>  
#include "ShellAPI.h"  
#include <string.h>

#define WM_IAWENTRAY    WM_USER+5  //系统托盘的自定义消息  

//定义全局变量  
HINSTANCE g_hInst;
NOTIFYICONDATA e;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	PSTR szCmdLine, int iCmdShow)
{
	g_hInst = hInstance; //获取该程序实例句柄  

	static TCHAR szAppName[] = TEXT("TimeWork");
	HWND         hwnd;
	MSG          msg;
	WNDCLASS     wndclass;

	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	if (!RegisterClass(&wndclass))
	{
		MessageBox(NULL, TEXT("This program requires Windows NT!"),
			szAppName, MB_ICONERROR);
		return 0;
	}

	hwnd = CreateWindow(szAppName,                  // window class name  
		TEXT("托盘程序"), // window caption  
		WS_OVERLAPPEDWINDOW,        // window style  
		CW_USEDEFAULT,              // initial x position  
		CW_USEDEFAULT,              // initial y position  
		CW_USEDEFAULT,              // initial x size  
		CW_USEDEFAULT,              // initial y size  
		NULL,                       // parent window handle  
		NULL,                       // window menu handle  
		hInstance,                  // program instance handle  
		NULL);                     // creation parameters  

	ShowWindow(hwnd, iCmdShow);
	UpdateWindow(hwnd);

	//初始化NOTIFYICONDATA结构  
	e.cbSize = sizeof(NOTIFYICONDATA);
	e.hWnd = hwnd;
	e.uID = 99;
	e.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
	e.uCallbackMessage = WM_IAWENTRAY;
	e.hIcon = LoadIcon(g_hInst, MAKEINTRESOURCE(99));
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC         hdc;
	PAINTSTRUCT ps;
	RECT        rect;

	switch (message)
	{
	case WM_CREATE:
		return 0;

	case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);

		GetClientRect(hwnd, &rect);

		DrawText(hdc, TEXT("Hello, my fridents！"), -1, &rect,
			DT_SINGLELINE | DT_CENTER | DT_VCENTER);

		EndPaint(hwnd, &ps);
		return 0;

	case WM_IAWENTRAY:
		if (wParam == 99) {
			if (lParam == WM_LBUTTONDOWN) {
				//还可以在这个地方加入一个菜单，鼠标右键单击时显示  
				ShowWindow(hwnd, SW_SHOWNORMAL);
				return TRUE;
			}
		}
		return FALSE;
	case WM_SYSCOMMAND:
		switch (wParam)
		{
		case SC_CLOSE:
			DestroyWindow(hwnd);
			PostQuitMessage(0);
			break;
		case SC_MINIMIZE:
			ShowWindow(hwnd, SW_HIDE);
			Shell_NotifyIcon(NIM_ADD, &e); //最小化时隐藏窗口并设置系统托盘  
			break;
		}
		return 0;

	case WM_DESTROY:
		Shell_NotifyIcon(NIM_DELETE, &e);
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, message, wParam, lParam); 

}