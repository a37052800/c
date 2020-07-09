#include <iostream>
#include <string>
using namespace std;
int main()
{
    ///////////////////////////////
    /*
    string s = "abcdefg";
    s.insert(1, "ABC");
    cout << s;
    s[2] = '@';
    cout << s;
    */
    ///////////////////////////////
    /*
    cout << endl
         << "//////////////" << endl;
    string s1;
    cin.clear();
    cin.sync();
    getline(cin, s1);
    s1.resize(s1.rfind(" "));
    cout << s1 << "size:" << s1.size();
    */
    //////////////////////////////
    /*
    string s2="123456789";
    s2.erase(0, s2.find("4")+1);
    cout << s2;
    */
    //////////////////////////////
    string s3="abcdefg",s4="cdefg";
    cout<<s3.compare(2, s3.size(), s4);
}