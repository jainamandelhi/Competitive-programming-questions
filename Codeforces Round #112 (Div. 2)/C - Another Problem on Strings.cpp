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
    ll k;
    cin>>k;
    string s;
    cin>>s;
    ll n=s.size();
    ll dp[n+1];
    ll ans=0,sum=0;
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<n;i++)
    {
        ll a=s[i]-'0';
        sum+=a;
        if(sum==k)
            ans++;
        if(sum>=k)
            ans+=dp[sum-k];
        dp[sum]++;
    }
    cout<<ans;
}
