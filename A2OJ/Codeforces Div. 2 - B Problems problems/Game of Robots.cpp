#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long arr[n];
    for(long long i=0;i<n;i++)
        cin>>arr[i];
    double ans=(-1+sqrt(1+8*(k)))/2;
   // cout<<ans<<endl;
    if(ans!=floor(ans))
    {
        ans=floor(ans);
        ans++;
    }
    //cout<<ans<<endl;
    n=ans*(ans+1)/2;
    //cout<<n<<endl;
    ans=ans-n+k;
    //cout<<ans<<endl;
    cout<<arr[int(ans)-1];
}
