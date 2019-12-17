#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
/*ll f(ll a, ll b)
{
    ll x=min(a,b);
    ll y=max(a,b);
    ll ans=1;
    ll t=1;
    while(t<=sqrt(x))
    {
        if(x%t==0 && y%t==0)
            ans=t;
        t++;
    }
    return ans;
}*/
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll a,b;
    cin>>a>>b;
    ll n,d;
    cin>>n>>d;
    ll arr[n];
    ll arr1[n];
    arr[0]=a;
    arr[n-1]=b;
    arr1[0]=a;
    arr1[n-1]=b;
    for(ll i=1;i<n-1;i++)
    {
        arr[i]=arr[i-1]+d;
    }
    for(ll i=n-2;i>0;i--)
    {
        arr1[i]=arr1[i+1]+d;
    }
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=min(arr[i],arr1[i]);
    }
    cout<<ans;
}
