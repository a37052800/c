#include <windows.h>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>

double Kp = 1, Ki = 0.1, Kd = 0;
double setpointX = 400, setpointY = 300;
double errorSumX = 0, lastErrorX = 400;
double errorSumY = 0, lastErrorY = 400;
int count = 0;

HWND hEditKp, hEditKi, hEditKd;

std::vector<POINT> ballTrail;

void DrawArrow(HDC hdc, POINT from, POINT to)
{
    const double ARROW_LENGTH = 10.0;
    const double ARROW_ANGLE = 0.5;

    double angle = atan2(to.y - from.y, to.x - from.x);

    POINT arrow[3];
    arrow[0] = to;
    arrow[1].x = to.x - static_cast<int>(ARROW_LENGTH * cos(angle - ARROW_ANGLE));
    arrow[1].y = to.y - static_cast<int>(ARROW_LENGTH * sin(angle - ARROW_ANGLE));
    arrow[2].x = to.x - static_cast<int>(ARROW_LENGTH * cos(angle + ARROW_ANGLE));
    arrow[2].y = to.y - static_cast<int>(ARROW_LENGTH * sin(angle + ARROW_ANGLE));

    MoveToEx(hdc, from.x, from.y, NULL);
    LineTo(hdc, to.x, to.y);
    LineTo(hdc, arrow[1].x, arrow[1].y);
    MoveToEx(hdc, to.x, to.y, NULL);
    LineTo(hdc, arrow[2].x, arrow[2].y);
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    static RECT clientRect;
    static POINT ballPos = {0, 0};
    static POINT ballRef = {0, 0};
    static HDC hdc;

    switch (uMsg)
    {
    case WM_CREATE:
        hEditKp = CreateWindowEx(0, "EDIT", "1.0", WS_CHILD | WS_VISIBLE | WS_BORDER,
                                 10, 10, 50, 20, hwnd, NULL, NULL, NULL);
        hEditKi = CreateWindowEx(0, "EDIT", "0.1", WS_CHILD | WS_VISIBLE | WS_BORDER,
                                 10, 40, 50, 20, hwnd, NULL, NULL, NULL);
        hEditKd = CreateWindowEx(0, "EDIT", "0.0", WS_CHILD | WS_VISIBLE | WS_BORDER,
                                 10, 70, 50, 20, hwnd, NULL, NULL, NULL);
        break;

    case WM_SIZE:
        GetClientRect(hwnd, &clientRect);
        break;

    case WM_LBUTTONUP:
        ballTrail.clear();
        setpointX = LOWORD(lParam);
        setpointY = HIWORD(lParam);
        ballRef.x = setpointX;
        ballRef.y = setpointY;
        break;

    case WM_MOUSEMOVE:
        SetCursor(LoadCursor(NULL, IDC_CROSS));
        break;

    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        hdc = BeginPaint(hwnd, &ps);

        GetClientRect(hwnd, &clientRect);
        FillRect(hdc, &clientRect, (HBRUSH)(COLOR_WINDOW + 1));

        HPEN hPen = CreatePen(PS_SOLID, 1, RGB(0, 0, 255));
        SelectObject(hdc, hPen);
        for (size_t i = 1; i < ballTrail.size(); ++i)
        {
            DrawArrow(hdc, ballTrail[i - 1], ballTrail[i]);
        }
        DeleteObject(hPen);

        Ellipse(hdc, ballPos.x - 10, ballPos.y - 10, ballPos.x + 10, ballPos.y + 10);
        HBRUSH redBrush = CreateSolidBrush(RGB(255, 0, 0));
        SelectObject(hdc, redBrush);
        Ellipse(hdc, ballRef.x - 10, ballRef.y - 10, ballRef.x + 10, ballRef.y + 10);
        DeleteObject(redBrush);

        EndPaint(hwnd, &ps);
    }
    break;

    case WM_TIMER:
    {
        char buffer[16];

        GetWindowText(hEditKp, buffer, 16);
        Kp = atof(buffer) / 10;

        GetWindowText(hEditKi, buffer, 16);
        Ki = atof(buffer) / 10;

        GetWindowText(hEditKd, buffer, 16);
        Kd = atof(buffer) / 10;

        double errorX = setpointX - ballPos.x;
        double errorY = setpointY - ballPos.y;

        errorSumX += errorX;
        errorSumY += errorY;

        double dErrorX = errorX - lastErrorX;
        double dErrorY = errorY - lastErrorY;

        lastErrorX = errorX;
        lastErrorY = errorY;

        double iLimitDistance = 11;
        if (!(errorX < iLimitDistance && errorX > -iLimitDistance))
            errorSumX = 0;
        if (!(errorY < iLimitDistance && errorY > -iLimitDistance))
            errorSumY = 0;

        double outputX = (Kp * errorX + Ki * errorSumX + Kd * dErrorX);
        double outputY = (Kp * errorY + Ki * errorSumY + Kd * dErrorY);

        ballPos.x += static_cast<int>(outputX);
        ballPos.y += static_cast<int>(outputY);

        if (count == 1 && (((outputX > 1) || (outputX < -1)) || ((outputY > 1) || (outputY < -1))))
        {
            count = 0;
            ballTrail.push_back(ballPos);
            if (ballTrail.size() > 30)
            {
                ballTrail.erase(ballTrail.begin());
            }
        }
        else
        {
            count = (count + 1) % 2;
        }

        InvalidateRect(hwnd, NULL, TRUE);
    }
    break;

    case WM_DESTROY:
        PostQuitMessage(0);
        break;

    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    const char CLASS_NAME[] = "PIDControllerWindowClass";

    WNDCLASS wc = {};

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0,
        CLASS_NAME,
        "PID Controller",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL);

    if (hwnd == NULL)
    {
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);

    SetTimer(hwnd, 1, 32, NULL);

    MSG msg = {};
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
