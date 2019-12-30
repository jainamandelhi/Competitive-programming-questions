#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
    ll n,k,d;
    cin>>n>>k>>d;
    ll dp[n+1][2];
    dp[0][0]=1;
    dp[0][1]=0;
    for( ll i=1;i<=n;i++)
    {
        dp[i][0]=0;
        dp[i][1]=0;
        for(ll j=1;j<=k;j++)
        {
            if(i-j<0)
                break;
            if(j<d)
            {
                dp[i][0]+=dp[i-j][0]%mod;
                dp[i][0]%=mod;
                dp[i][1]+=dp[i-j][1]%mod;
                dp[i][1]%=mod;
            }
            else if(j==d)
            {
                //dp[i][0]=dp[i-1][0]%mod;
                dp[i][1]+=dp[i-j][0]%mod+dp[i-j][1]%mod;
                dp[i][1]%=mod;
            }
            else
            {
               //+ dp[i][0]+=dp[i-j][0]%mod;
                dp[i][0]%=mod;
                dp[i][1]+=dp[i-j][0]%mod+dp[i-j][1]%mod;
                dp[i][1]%=mod;
            }
        }
    }
    cout<<dp[n][1];
}
