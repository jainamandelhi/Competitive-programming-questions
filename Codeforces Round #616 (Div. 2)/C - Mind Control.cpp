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
ll func(ll i,ll j,ll m,ll k,ll arr[],vector<vector<ll> >&dp)
{
    if(m==0)
    {
        return max(arr[i],arr[j]);
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    ll ans=0;
    if(k>0)
    {
        ans=max(ans,func(i+1,j,m-1,k-1,arr,dp));
        ans=max(ans,func(i,j-1,m-1,k-1,arr,dp));
    }
    else
    {
        ans=INT_MAX;
        ans=min(ans,func(i+1,j,m-1,k,arr,dp));
        ans=min(ans,func(i,j-1,m-1,k,arr,dp));
    }
    return dp[i][j]=ans;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,k,m;
        cin>>n>>m>>k;
        ll arr[n];
        vector<vector<ll> >dp(n+1,vector<ll>(n+1,-1));
        for(ll i=0;i<n;i++)
            cin>>arr[i];
      cout<<func(0,n-1,m-1,k,arr,dp)<<endl;
    }
}
