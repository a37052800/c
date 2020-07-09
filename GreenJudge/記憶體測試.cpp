#include <iostream>
#include <windows.h>
#include <psapi.h>
int main()
{
    PROCESS_MEMORY_COUNTERS pmc;
    int n;
    std::cin >> n;
    int a[n][n];
    bool res=GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc)); //get memory usage
    std::cout << res << "memory usage:" << pmc.PeakWorkingSetSize; //unit in bytes
    system("PAUSE");
}