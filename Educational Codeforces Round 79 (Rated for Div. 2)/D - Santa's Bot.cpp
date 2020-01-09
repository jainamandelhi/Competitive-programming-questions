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
ll mod=998244353;
ll func(ll a, ll b, ll mod)
{
    if(b==0)
        return 1;
    ll p=func(a,b/2,mod)%mod;
    p=(p*p)%mod;
    if(b%2==1)
        return (a*p)%mod;
    else
        return p;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    vector<vector<ll> >arr(t);
    vector<ll>cnt(1000001);
    for(ll j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            arr[j].pb(a);
            cnt[a]++;
        }
    }
    ll ans=0;
    for(ll i=0;i<t;i++)
    {
        ll temp,a=0;
        temp=func(t,mod-2,mod);
        temp%=mod;
        ll temp1=func(arr[i].size(),mod-2,mod);
        temp1%=mod;
        for(ll j=0;j<arr[i].size();j++)
        {
            a=cnt[arr[i][j]];
            ll prob;
            prob=temp%mod*temp%mod;
            prob%=mod;
            prob=(prob%mod*(temp1%mod*a%mod)%mod)%mod;
            prob%=mod;
            ans=(ans%mod+prob%mod)%mod;
            ans%=mod;
        }
    }
    cout<<ans;
}
