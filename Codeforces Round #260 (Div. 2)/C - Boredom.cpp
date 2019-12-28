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
    ll n;
    cin>>n;
    vector<ll>arr(100005);
    vector<ll>dp(100005);
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        arr[a]++;
    }
    dp[1]=arr[1];
    for(ll i=2;i<100005;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+i*arr[i]);
    }
    cout<<dp[100004];
}
