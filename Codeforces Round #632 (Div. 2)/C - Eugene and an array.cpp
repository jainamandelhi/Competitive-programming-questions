#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
    ll n;
    cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    vector<ll>dp(n+1);
    ll sum = 0;
    ll ans = 0;
    map<ll,ll>m;
    m[0] = 0;
    for(ll i = 1; i <= n; i++)
    {
        sum += arr[i-1];
        dp[i] = dp[i-1];
        if(m.find(sum) != m.end())
        {
            dp[i] = max(m[sum]+1,dp[i]);
        }
        m[sum] = i;
        ans += i-dp[i];
    }
    cout<<ans<<endl;
}
