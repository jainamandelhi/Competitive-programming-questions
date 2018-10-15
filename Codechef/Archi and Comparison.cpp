#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int a,b,n;
		cin>>a>>b>>n;
		if(n%2==0)
		{
			a=abs(a);
			b=abs(b);
		}
		if(a>b)
			cout<<"1"<<endl;
		if(b>a)
			cout<<"2"<<endl;
		if(a==b)
			cout<<"0"<<endl;
	}
	return 0;
}
