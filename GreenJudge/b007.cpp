#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i;
	char s[10];
	cin>>s;
	for (i=strlen(s)-1;i>=0;i--) cout<<s[i];
	return 0;
}
