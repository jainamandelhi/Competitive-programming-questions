/* Isn't passion overrated? */

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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<vector<ll> >dp(n,vector<ll>(3));
    ll v[3] = {0};
    while(l%3 && l <= r)
    {
        v[l%3]++;
        l++;
    }
    while(r%3 != 2 && r >= l)
    {
        v[r%3]++;
        r--;
    }
    if(l <= r)
    {
        r++;
        ll a = r-l;
        a /= 3;
        v[0] += a;
        v[1] += a;
        v[2] += a;
    }
    dp[0][0] = v[0];
    dp[0][1] = v[1];
    dp[0][2] = v[2];
    ll v0 = v[0], v1 = v[1], v2 = v[2];
    for(ll i = 1; i < n; i++)
    {
        dp[i][0] = v0%mod * dp[i-1][0]%mod;
        dp[i][0] %= mod;
        dp[i][0] += v1%mod * dp[i-1][2]%mod;
        dp[i][0] %= mod;
        dp[i][0] += v2%mod * dp[i-1][1]%mod;
        dp[i][0] %= mod;
        dp[i][1] = v0%mod * dp[i-1][1]%mod;
        dp[i][1] %= mod;
        dp[i][1] += v1%mod * dp[i-1][0]%mod;
        dp[i][1] %= mod;
        dp[i][1] += v2%mod * dp[i-1][2]%mod;
        dp[i][1] %= mod;
        dp[i][2] = v0%mod * dp[i-1][2]%mod;
        dp[i][2] %= mod;
        dp[i][2] += v1%mod * dp[i-1][1]%mod;
        dp[i][2] %= mod;
        dp[i][2] += v2%mod * dp[i-1][0]%mod;
        dp[i][2] %= mod;
    }
    cout<<dp[n-1][0]%mod;
    return 0;
}
