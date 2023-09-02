#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int v1 = atoi(argv[1]), v2 = atoi(argv[2]);
    string output = argv[3], comd;
    stringstream ss;
    ss.clear();
    ss.str("");
    ss << "copy /b ";
    for (int i = v1; i < v2; i++)
    {
        ss << i << ".ts + ";
    }
    ss << v2 << ".ts " << output << ".ts";
    getline(ss, comd);
    system(comd.c_str());
}