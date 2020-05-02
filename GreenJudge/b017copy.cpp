#include <iostream>

#include <cstring>

#define For(i,a,b) for(int i=a;i<=b;i++)

typedef long long ll;

using namespace std;

int main(void)

{

	char in1[51],in2[51];

	int a[51],b[51],c[102];

	bool zero=true;

	

	cin>>in1>>in2;

	

	For(i,0,100)

	{

		a[i]=0;

		b[i]=0;

		c[i]=0;

	}

	

	For(i,0,strlen(in1)-1)

		a[50-strlen(in1)+i]=((int) in1[i])-48;

	For(i,0,strlen(in2)-1)

		b[50-strlen(in2)+i]=((int) in2[i])-48;

	

	For(i,0,strlen(in1))

	{

		For(j,0,strlen(in2))

		{

			c[100-i-j]=a[49-i]*b[49-j]+c[100-i-j];

			while (c[100-i-j]>=10)

			{

				c[99-i-j]++;

				c[100-i-j]-=10;

			}

		}

	}

	

	For(i,0,100)

	{

		if (!zero)

		{

			cout<<c[i];

		}

		else if (zero && c[i]!=0)

		{

			cout<<c[i];

			zero=!zero;

		}

		else

		{

			continue;

		}

	}

	

	cout<<endl;

	

	return 0;

}
