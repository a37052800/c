#include <iostream>
#include <string> 
#include <cmath>
using namespace std;
int main()
{
	string s[3];
    int n[3][9]= {0},i,j,t0,t1,t2,d=0,t;
    for(i=0; i<3; i++)
    {
        getline(cin,s[i]);
        for(j=0;j<s[0].size();j++)
        {
            if(s[i][j]=='?') n[i][j]=-1;
            else n[i][j]=int(s[i][j])-int('0');
        }
    }
    for(i=s[0].size()-1;i>=0;i--)
    {
		if(n[0][i]==-1) t0=0;else t0=n[0][i];
		if(n[1][i]==-1) t1=0;else t1=n[1][i];
		if(n[2][i]==-1) t2=0;else t2=n[2][i];
		while((labs(t0)+labs(t1)+d)%10!=t2)
		{	
			if(n[0][i]==-1) t0++;
			if((t0+t1+d)%10==t2) break;
			if(n[1][i]==-1) t1++;
			if((t0+t1+d)%10==t2) break;
			if(n[2][i]==-1)
			{
				t2=0;
				if(t0==-1) t2+=n[0][i];
				else t2+=t0;
				if(t1==-1) t2+=n[1][i];
				else t2+=t1;
				t2+=d;
				t2%=10;
			}
		}
		if(t0+t1+d>=10) d=1;
		else d=0;
		n[0][i]=t0; n[1][i]=t1; n[2][i]=t2;
	}
	t=d;
	for(i=0;i<3;i++)
	{
		if(d!=0) cout<<t;
		t=0;
		for(j=0;j<s[0].size();j++) cout<<n[i][j];
		cout<<endl;
	}
	return 0;
}

