#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,sum1=0,sum2=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
    }
    sum=min(sum1,n-sum1)+min(sum2,n-sum2);
    cout<<sum;
	return 0;
}
