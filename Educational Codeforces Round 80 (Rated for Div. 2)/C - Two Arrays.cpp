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
ll mod=1000000007;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    m*=2;
    ll dp[n+1][m+1];
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            if(i==1 || j==1)
                dp[i][j]=1;
            else
            {
                dp[i][j]=dp[i-1][j]%mod+dp[i][j-1]%mod;
                dp[i][j]%=mod;
            }
        }
    }
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        sum=(sum%mod+dp[i][m]%mod)%mod;
    }
    cout<<sum;
}
