#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long count=0;
        while(n>0)
        {
            if(n%2)
                count++;
            n=n>>1;
        }
        if(count==0)
            cout<<1;
        else
        {
            long long b=pow(2,count);
            cout<<b;
        }
        cout<<endl;
    }
	//code
	return 0;
}
