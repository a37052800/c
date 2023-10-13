#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int end = atoi(argv[1]), err = 0;
    string output = argv[2], comd;
    stringstream ss;
    if (end / 900 == 0)
    {
        ss.clear();
        ss.str("");
        ss << "copy /b ";
        for (int i = 0; i < end; i++)
            ss << i << ".ts + ";
        ss << end << ".ts " << output << ".ts";
        getline(ss, comd);
        err = system(comd.c_str());
        return err;
    }
    else
    {
        const int MAX = 800;
        int loop;
        for (loop = 0; loop <= end / MAX; loop++)
        {
            ss.clear();
            ss.str("");
            ss << "copy /b ";
            int limit = (loop + 1) * MAX < end ? (loop + 1) * MAX : end + 1;
            for (int i = loop * MAX; i < limit - 1; i++)
                ss << i << ".ts + ";
            ss << limit - 1 << ".ts " << output << "_" << loop << ".ts";
            getline(ss, comd);
            err = system(comd.c_str());
            if (err != 0)
                return err;
        }
        loop--;
        ss.clear();
        ss.str("");
        ss << "copy /b ";
        for (int i = 0; i < loop; i++)
            ss << output << "_" << i << ".ts + ";
        ss << output << "_" << loop << ".ts " << output << ".ts";
        getline(ss, comd);
        err = system(comd.c_str());
        if (err != 0)
            return err;
        ss.clear();
        ss.str("");
        ss << "del ";
        for (int i = 0; i <= loop; i++)
            ss << output << "_" << i << ".ts ";
        getline(ss, comd);
        err = system(comd.c_str());
        if (err != 0)
            return err;
    }
}