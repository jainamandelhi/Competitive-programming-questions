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
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,k;
        cin>>n>>p>>k;
        ll ans=n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        ll dp[2][n+1];
        dp[0][0]=0;
        dp[1][0]=0;
        for(ll i =1;i<=n;i++)
        {
            if(i<k)
            {
                dp[0][i]=dp[0][i-1]+arr[i-1];
                dp[1][i]=INT_MAX;
            }
            else
            {
                dp[0][i]=min(dp[0][i-1],dp[1][i-1])+arr[i-1];
                dp[1][i]=min(dp[0][i-k],dp[1][i-k])+arr[i-1];
            }
            //if(min(dp[0][i],dp[1][i])>p && dp[1][i]!=INT_MAX)
           // {
                //ans=i-1;
             //   break;
           // }
        }
        for(ll i=n;i>=0;i--)
        {
            if(min(dp[0][i],dp[1][i])<=p)
            {
                cout<<i<<endl;
                break;
            }
        }
            //cout<<ans<<endl;
           // for(ll i=0;i<2;i++)
           // {
           //     for(ll j=0;j<=n;j++)
           //         cout<<dp[i][j]<<" ";
           //     cout<<endl;
           // }
    }
}
