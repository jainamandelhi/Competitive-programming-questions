#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,sum=0,k;
   cin>>n>>k;
   long long r=n*2,g=n*5,b=n*8;
   if(r%k==0)
        sum+=r/k;
   else
        sum+=r/k+1;
   if(g%k==0)
        sum+=g/k;
   else
        sum+=g/k+1;
    if(b%k==0)
        sum+=b/k;
   else
        sum+=b/k+1;
    cout<<sum;
}
