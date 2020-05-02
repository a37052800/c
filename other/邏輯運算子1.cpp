#include<iostream>
using namespace std;
int main()
{  long a,b,c;
	cin>>a>>b>>c;
	if (a==0)
	{ if (b==0)
		{if (c==0) cout<<"AND"<<endl<<"OR"<<endl<<"XOR";
          else cout<<"IMPOSSIBLE";
		}
	 if (b!=0)
	    {if (c==0) cout<<"AND";
	    	else cout<<"OR"<<endl<<"XOR";
		}	
	}
	if (a!=0)
	{ if (b==0)
		{if (c==0) cout<<"AND ";
          else cout<<"OR"<<endl<<"XOR";		
		}
	 if (b!=0)
	    {if (c==0) cout<<"XOR";
	    	else cout<<"AND"<<endl<<"OR";
		}	
	}
	return 0;
}

