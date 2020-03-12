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
ll n,h,l,r;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin>>n>>h>>l>>r;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)
        cin>>arr[i];
    vector<vector<ll> >dp(n+1,vector<ll>(h+1,-1));
    dp[0][0]=0;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<=h;j++)
        {
            if(dp[i][j]!=-1)
            {
                ll a=arr[i+1];
                a+=j;
                ll b=a;
                a%=h;
                b--;
                b%=h;
                if(dp[i+1][a]<=dp[i][j])
                {
                    dp[i+1][a]=dp[i][j];
                    if(a>=l && a<=r)
                        dp[i+1][a]++;
                }
                if(dp[i+1][b]<=dp[i][j])
                {
                    dp[i+1][b]=dp[i][j];
                    if(b>=l && b<=r)
                        dp[i+1][b]++;
                }
            }
        }
    }
    for(ll i=0;i<=h;i++)
        ans=max(ans,dp[n][i]);
 cout<<ans;
}
