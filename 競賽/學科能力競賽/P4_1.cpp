#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
class v
{
public:
    int x;
    int y;
    int nr;
};
int main()
{
    int w,h,n,r,m,tx,ty,ans=0;
    cin>>w>>h>>n>>r>>m;
    int wh[w][h];
    v tn[n];
    memset(wh,0,sizeof(wh));
    for(int i=0; i<m; i++)
    {
        cin>>tx>>ty;
        wh[tx][ty]=9; ////
        tn[i].x=tx;
        tn[i].y=ty;
        tn[i].nr=0;
    }
    //範圍 
	for(int i=0;i<m;i++)
    {
    	for(int j=0;j<h;j++)
    	{
    		for(int k=0;k<w;k++)
    		{
    			if((k==tn[i].x)&&(j==tn[i].y)) continue;
    			int t=(k-tn[i].x)*(k-tn[i].x)+(j-tn[i].y)*(j-tn[i].y);
				if (t<=(r*r))
    			{
    				wh[k][j]=1;
    				tn[i].nr+=1;
				}
			}
		}
	} 
    //排序
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(tn[i].nr<tn[j].nr)
            {
                int t;
                t=tn[i].nr;
                tn[i].nr=tn[j].nr;
                tn[j].nr=t;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        ans+=tn[i].nr;
        //扣
    	for(int j=0;j<h;j++)
    	{
    		for(int k=0;k<w;k++)
    		{
    			if((k==tn[i].x)&&(j==tn[i].y)) continue;
    			int t=(k-tn[i].x)*(k-tn[i].x)+(j-tn[i].y)*(j-tn[i].y);
				if (t<=(r*r))
    			{
    				wh[k][j]=0;
				}
			}
		}
        tn[i].nr=0; //歸零
        //nr更新
    	int t=0;
		for(int j=i+1;j<h;j++)
    	{
    		for(int k=0;k<w;k++)
    		{
    			if((k==tn[i].x)&&(j==tn[i].y)) continue;
    			int t=(k-tn[i].x)*(k-tn[i].x)+(j-tn[i].y)*(j-tn[i].y);
				if (t<=(r*r))
    			{
    				t+=wh[k][j];
				}
			}
		}
		tn[i].nr=t;
        //排序
        for(int j=0; j<m; j++)
        {
            for(int k=j+1; k<m; k++)
            {
                if(tn[j].nr<tn[k].nr)
                {
                    int t;
                    t=tn[j].nr;
                    tn[j].nr=tn[k].nr;
                    tn[k].nr=t;
                }
            }
        }
    }
    /*for(int i=0; i<m; i++)
    {
        cout<<tn[i].x<<" "<<tn[i].y<<" "<<tn[i].nr<<endl;
    }
    for(int i=h-1; i>=0; i--)
    {
        for(int j=0; j<w; j++)
        {
            cout<<wh[j][i]<<"("<<j<<","<<i<<")"<<" ";
        }
        cout<<endl;
    }*/
    cout<<ans+n;
    return 0;
}
/*
8 6 2 1 3
1 1
3 2
6 4
*/
/*
8 6 1 2 3
1 1
3 2
6 4
*/

