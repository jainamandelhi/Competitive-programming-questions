#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ll n,v;
    cin>>n>>v;
    vector<ll>arr(4001+1);
    vector<ll> arr1;
    for(ll i=1;i<n+1;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[a]+=b;
        arr1.pb(a);
    }
    ll ans=0;
    ll a=0,b=0;
    for(ll i=1;i<=4000;i++)
    {
        b=arr[i];
        ll temp=v;
        ll tt=min(a,temp);
        ans=ans+tt;
        temp=temp-tt;
        a=a-tt;
        if(temp>0)
        {
            ans=ans+min(b,temp);
            b=b-min(b,temp);
        }
        a=b;
    }
    ans=ans+min(v,a);
    cout<<ans;
}
