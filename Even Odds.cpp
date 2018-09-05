#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,j;
    cin>>n>>k;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n%2)
         j=n/2+1;
    else
         j=n/2;
    if(j<k)
        cout<<2*(n-j);
    else
        cout<<2*k-1;
}
