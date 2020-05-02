#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    string s[3];
    int n[3][9]= {0},i,j,d=0,t=0;
    for(i=0; i<3; i++)
    {
        getline(cin,s[i]);
        for(j=0; j<s[i].size(); j++)
        {
            if(s[i][j]=='?') n[i][j]=-1;
            else n[i][j]=int(s[i][j])-int('0');
        }
    }
    for(i=s[0].size()-1; i>=0; i--)
    {
        t=0;

        for(j=0; j<3; j++)
        {
            if(n[j][i]==-1)
            {
                switch (j)
                {
                case 0:
                    n[j][i]=n[2][i]-n[1][i]-d;
                    d=0;
                    break;
                case 1:
                    n[j][i]=n[2][i]-n[0][i]-d;
                    d=0;
                    break;
                case 2:
                    n[j][i]=n[0][i]+n[1][i]+d;
                    d=0;
                    break;
                }
                if(n[j][i]>9)
                {
                    d=1;
                    n[j][i]=n[j][i]%10;
                }
                else if(n[j][i]<0)
                {
                    d=1;
                    n[j][i]=n[j][i]+10;
                }
            }
            else t++;
        }
        if(t>=3)
        {
            d=1;
            t=0;
        }
    }
    system("cls");
    for(i=0; i<3; i++)
    {
        for(j=0; j<s[0].size(); j++) cout<<n[i][j];
        cout<<endl;
    }
}
