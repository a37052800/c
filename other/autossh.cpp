#include <fstream>
#include <sstream>
#include <string>
#include <Windows.h>
int main()
{
    while (true)
    {
        WinExec("taskkill -im putty.exe -f", SW_HIDE);
        Sleep(1000);
        WinExec("putty.exe -load rdp", SW_HIDE);
        while (true)
        {
            WinExec("PowerShell Test-NetConnection -ComputerName simon901101.901101.xyz -Port 2161 >result.txt", SW_HIDE);
            Sleep(15000);
            std::ifstream fin;
            fin.open("result.txt");
            // TcpTestSucceeded : True
            std::stringstream ss;
            ss << fin.rdbuf();
            fin.close();
            if (ss.str().find("TcpTestSucceeded : True") != std::string::npos)
                Sleep(30000);
            else
                break;
        }
    }
}

// g++ -static -O3 -std=c++17 .\autossh.cpp -o .\autossh.exe