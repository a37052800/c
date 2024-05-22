#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fin;
    fin.open("C:\\Users\\Tim\\.ssh\\id_rsa", ios::binary);
    if (fin.is_open()) {
        ofstream fout;
        fout.open("C:\\Users\\Tim\\Desktop\\id_rsa_copy");
        if (fout.is_open()) {
            char ch;
            while (fin.get(ch))
                fout.put(ch);
            fout.close();
        }
        fin.close();
    }
}