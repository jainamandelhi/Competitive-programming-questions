/* Isn't passion overrated?*/

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
ll mod = 998244353;
ll power(ll a, ll x)
{
    if(x == 0)
        return 1;
    ll ans = power(a, x/2);
    ans *= ans;
    ans %= mod;
    if(x % 2)
        ans *= a;
    return ans % mod;
}

vector<ll>per(200010);

ll ncr(ll n, ll i)
{
    return (per[n] * power(per[i], mod-2) % mod * power(per[n-i], mod-2) % mod) % mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;
    per[0] = 1;
    ll h = per.size();
    for(ll i = 1; i < h; i++)
    {
        per[i] = i * per[i-1];
        per[i] %= mod;
    }
    ll ans = 0;
    for(ll i = 0; i <= k; i++)
    {
        ll temp = ncr(n-1, i);
        temp = temp * m;
        temp %= mod;
        temp = temp * power(m-1,n-1-i);
        ans += temp;
        ans %= mod;
    }
    cout<<ans % mod;
    return 0;
}
