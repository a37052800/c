#include <iostream>
#include <cstring>
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
    for(int i=0; i<m; i++)
    {
        for(int j=1; j<=r; j++)
        {
            if((tn[i].x+j)<w)
            {
                wh[tn[i].x+j][tn[i].y]=1; //右
                tn[i].nr+=1;
            }
            if((tn[i].x-j)>=0)
            {
                wh[tn[i].x-j][tn[i].y]=1; //左
                tn[i].nr+=1;
            }
            if((tn[i].y+j)<h)
            {
                wh[tn[i].x][tn[i].y+j]=1; //上
                tn[i].nr+=1;
            }
            if((tn[i].y-j)>=0)
            {
                wh[tn[i].x][tn[i].y-j]=1; //下
                tn[i].nr+=1;
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
        for(int j=1; j<=r; j++)
        {
            if((tn[i].x+j)<w)
            {
                wh[tn[i].x+j][tn[i].y]=0; //右
            }
            if((tn[i].x-j)>=0)
            {
                wh[tn[i].x-j][tn[i].y]=0; //左
            }
            if((tn[i].y+j)<h)
            {
                wh[tn[i].x][tn[i].y+j]=0; //上
            }
            if((tn[i].y-j)>=0)
            {
                wh[tn[i].x][tn[i].y-j]=0; //下
            }
        }
        tn[i].nr=0; //歸零
        //nr更新
        for(int j=i+1; j<m; j++)
        {
            int t=0;
            for(int k=1; k<=r; k++)
            {
                if((tn[j].x+k)<w)
                {
                    t+=wh[tn[j].x+k][tn[j].y]; //右
                }
                if((tn[j].x-k)>=0)
                {
                    t+=wh[tn[j].x-k][tn[j].y]; //左
                }
                if((tn[j].y+k)<h)
                {
                    t+=wh[tn[j].x][tn[j].y+k]; //上
                }
                if((tn[j].y-k)>=0)
                {
                    t+=wh[tn[j].x][tn[j].y-k]; //下
                }
            }
        }
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
    for(int i=0; i<m; i++)
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
    }
    cout<<ans+n;
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

