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
ll power(ll n,ll m)
{
    if(m == 0)
        return 1;
    ll ans = power(n,m/2)%mod;
    ans = (ans%mod * ans%mod)%mod;
    if(m%2)
        ans = ans%mod * n;
    return ans%mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>freq(n+3);
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            if(a > n)
                a = n+2;
            freq[a]++;
        }
        vector<ll>freq1 = freq;
        for(ll i = 1; i <= n+2; i++)
        {
            if(freq[i] == 0)
                continue;
            freq[i] = power(2ll,freq[i])%mod - 1;
        }
            freq[0] = 1;
        for(ll i = n+1; i >= 0; i--)
            freq1[i] = (freq1[i]%mod + freq1[i+1]%mod)%mod;
        for(ll i = 1; i <= n+2; i++)
        {
           // cout<<freq[i]<<" ";
            freq[i] *= freq[i-1]%mod;
            freq[i] %= mod;
        }
        ll ans = 0;
        for(ll i = 1; i <= n+1; i++)
        {
            ans = (ans+i*freq[i-1]%mod*power(2ll,freq1[i+1])%mod)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
