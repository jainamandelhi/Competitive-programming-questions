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
ll x,y;
ll dp[101][101][11][11];
ll fun(ll a,ll b,ll c,ll d)
{
    if(a==0 && b==0)
        return 1;
    if(dp[a][b][c][d]!=-1)
        return dp[a][b][c][d]%mod;
    ll ans=0;
    if(a && c<x)
        ans=(ans%mod+fun(a-1,b,c+1,0)%mod)%mod;
    if(b && d<y)
        ans=(ans%mod+fun(a,b-1,0,d+1)%mod)%mod;
    return dp[a][b][c][d]=ans%mod;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n==1 && m==1)
    {
        cout<<0;
        return 0;
    }
    if(n==1 || m==1)
    {
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
                cout<<i+j<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cout<<i*(j+n)<<" ";
        }
        cout<<endl;
    }
}
