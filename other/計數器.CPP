#include <iostream>
using namespace std;
int main()
{
	int i=0;
	string s;
    cout<<"i="<<i<<" ";
    while(i<=9)
    {
        s.clear();
        cin.sync();
        s=cin.get();
        if(s=="+") i++;
        if(i>9) i=0;
        if(s=="r") i=0;
		if(s=="q") return(0);
        cout<<"i="<<i<<" ";
        s=cin.get();
    }
}
