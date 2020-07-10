#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	ifstream fin;
	ofstream fout;
	string s[10];

	fin.open("istreamTest.txt");
	fout.open("ostreamTest.txt");
	if (!fin.is_open())
		cout << "fail";
	if (!fout.is_open())
		cout << "fail";
	for (int i = 0; i < 3; i++)
	{
		fin >> s[i];
		cout << s[i] << endl;
		fin.ignore();
	}
	for (int i = 0; i < 2; i++)
	{
		fin.clear();
		fin.sync();
		getline(fin, s[i]);
		cout << s[i] << endl;
	}
	for (int i = 0; i <= 9; i++)
	{
		s[i] = "0000000000";
		fout << s[i] << endl;
	}

	fin.close();
	fout.close();
	return 0;
}
