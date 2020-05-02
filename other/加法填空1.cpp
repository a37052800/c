#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int pluscake(int n[3][9],int l,int d);
int main()
{
    string s[3];
    int n[3][9]= {0},i,j;
    for(i=0; i<3; i++)
    {
        getline(cin,s[i]);
        for(j=s[i].size()-1; j>=0; j--)
        {
            if(s[i][j]=='?') n[i][j]=-1;
            else n[i][j]=int(s[i][j])-int('0');
        }
    }
}
int pl(int n[3][9],int l,int d)
{
    int a=n[0][l],b=n[1][l],c=n[2][l];
    if(a==-1)
	{
		for(int i=0;i<10;i++)
		{
			n[0][l]=i;
			pl(n,l,d);
		}
	}
	if(b==-1)
	{
		for(int i=0;i<10;i++)
		{
			n[1][l]=i;
			pl(n,l,d);
		}
	}
	if(c==-1)
	{
		n[2][l]=a+b+d;
		pl(n,l,d);
	}
	if((a+b)%10==c)
	{
		pl(n,l+1,(a+b)/10);
	}
}
/*
9????9???
???9?????
?????????
*/
