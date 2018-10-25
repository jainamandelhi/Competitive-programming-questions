#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long y,k,n;
    cin>>y>>k>>n;
    long long p=k-(y%k);
        long long flag=0;
    while(p<=n-y)
    {
        flag=1;
        cout<<p<<" ";
        p+=k;
    }
    if(!flag)
        cout<<-1;
}
