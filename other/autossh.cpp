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
        WinExec("putty.exe -load sshrdp", SW_HIDE);
        while (true)
        {
            WinExec("PowerShell Test-NetConnection -ComputerName rdp.timsnet.uk -Port 4489 >result.txt", SW_HIDE);
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