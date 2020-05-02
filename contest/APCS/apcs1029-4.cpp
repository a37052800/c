#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string a[9][6];
    stringstream ss;
    int i,j,n,x=0,m[45],t[4],c=0,o=0;
    for(i=0; i<4; i++)
        t[i]=0;
    for(i=0; i<9; i++)
        for(j=0; j<6; j++)
            a[i][j]="0";
    for(i=0; i<9; i++)
    {
        cin>>a[i][0];
        ss.clear();
        ss.str(a[i][0]);
        ss>>x;
        for(j=1; j<=x; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>n;
    x=0;
    for(j=1; j<=5; j++)
    {
        for(i=0; i<9; i++)
        {
            if(a[i][j]=="1B")
                m[x]=1;
            else if(a[i][j]=="2B")
                m[x]=2;
            else if(a[i][j]=="3B")
                m[x]=3;
            else if(a[i][j]=="HR")
                m[x]=4;
            else if(a[i][j]=="0")
                m[x]=0;
            else
                m[x]=-1;
            x++;
        }
    }
    x=0;
    for(i=0; i<45; i++)
    {
        if(x==n)
        {
            cout<<c;
            i=45;
        }
        if(o>=3)
        {
            for(j=0; j<4; j++)
                t[j]=0;
            o=0;
        }
        if(m[i]==-1)
        {
            x++;
            o++;
        }
        else
        {
            t[0]=1;
            for(j=0; j<m[i]; j++)
            {
                c=c+t[3];
                t[3]=t[2];
                t[2]=t[1];
                t[1]=t[0];
                t[0]=0;
            }
        }
    }
    return 0;
}
/*
5 1B 1B FO GO 1B
5 1B 2B FO FO SO
4 SO HR SO 1B
4 FO FO FO HR
4 1B 1B 1B 1B
4 GO GO 3B GO
4 1B GO GO SO
4 SO GO 2B 2B
4 3B GO GO FO
6
*/
