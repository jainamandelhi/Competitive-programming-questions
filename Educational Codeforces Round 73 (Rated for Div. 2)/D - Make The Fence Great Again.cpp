/* Isn't passion overrated?*/

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
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll fence[n],cost[n];
        for(ll i = 0; i < n; i++)
        {
            cin>>fence[i]>>cost[i];
        }
        ll maxi1 = 1000000000000000000;
        vector<vector<ll> >dp(n,vector<ll>(3,maxi1));
        dp[0][0] = 0;
        dp[0][1] = cost[0];
        dp[0][2] = cost[0]*2;
        for(ll i = 1; i < n; i++)
        {
            for(ll j = 0; j < 3; j++)
            {
                for(ll k = 0; k < 3; k++)
                {
                    if(fence[i]+j != fence[i-1]+k)
                        dp[i][j] = min(dp[i-1][k]+cost[i]*j,dp[i][j]);
                }
            }
        }
        //for(ll i = 0; i < n; i++)
         //   cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<endl;
        cout<<min(dp[n-1][0],min(dp[n-1][2],dp[n-1][1]))<<endl;
    }
    return 0;
}
