#include <iostream>
using namespace std;
int main()
{
	int i,n,s[100],t=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>s[i];
	for(i=0;i<n;i++) t+=s[i];
	cout<<t/n<<".";
	if(t*100/n%100>9)
	{
		if(t*1000/n%10>4)
		{
			cout<<t*100/n%100+1;
		}
		else cout<<t*100/n%100;
	}
	else if(t*1000/n%10>4) cout<<"0"<<t*100/n%100+1;
	else cout<<"0"<<t*100/n%100;
	cout<<endl;
	t=s[0];
	for(i=0;i<n;i++) if(s[i]>t) t=s[i];
	cout<<t<<endl;
	t=s[0];
	for(i=0;i<n;i++) if(s[i]<t) t=s[i];
	cout<<t<<endl;
	return 0;
}
