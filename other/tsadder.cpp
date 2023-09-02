#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int v = atoi(argv[1]);
    string output = argv[2], comd;
    stringstream ss;
    ss.clear();
    ss.str("");
    ss << "copy /b ";
    for (int i = 0; i < v; i++)
    {
        ss << i << ".ts + ";
    }
    ss << v << ".ts " << output << ".ts";
    getline(ss, comd);
    system(comd.c_str());
}