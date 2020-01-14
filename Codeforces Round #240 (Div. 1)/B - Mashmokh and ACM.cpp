#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
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
    ll n,k;
    cin>>n>>k;
    ll dp[n+1][k+1];
    for(ll i=1;i<=n;i++)
        dp[i][1]=1;
    for(ll i=1;i<=k;i++)
        dp[1][i]=1;
    vector<vector<ll> >arr(n+1);
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                arr[i].pb(j);
                if(j!=sqrt(i))
                    arr[i].pb(i/j);
            }
        }
    }
    for(ll i=2;i<=n;i++)
    {
        for(ll j=2;j<=k;j++)
        {
            ll a=0;
            for(ll t=0;t<arr[i].size();t++)
            {
                ll b=arr[i][t];
                a+=dp[b][j-1];
                a%=mod;
            }
            dp[i][j]=a%mod;
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ans+=dp[i][k];
        ans%=mod;
    }
    cout<<ans;
}
