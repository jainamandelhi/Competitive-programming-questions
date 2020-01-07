#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,mod;
    cin>>n>>mod;
    ll arr[n+1];
    arr[0]=1;
    for(ll i=1;i<=n;i++)
        arr[i]=(arr[i-1]*i)%mod;
    ll ans=0;
   /* for(ll i=1;i<=4;i++)
        cout<<arr[i]<<" ";
    cout<<endl;*/
    for(ll i=1;i<=n;i++)
    {
        ll ans1=arr[i];
        ans1%=mod;
        ans1*=arr[n-i];
        ans1%=mod;
        ans1=ans1*(n-i+1)%mod;
        ans1%=mod;
        ans1=ans1*(n-i+1)%mod;
        ans1%=mod;
        ans+=ans1;
        ans%=mod;
    }
   // ans=ans+(arr[n]*n)%mod;
    cout<<ans%mod;
}
