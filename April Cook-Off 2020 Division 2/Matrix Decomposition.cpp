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
ll power(ll a,ll m)
{
    a %= mod;
    ll res = 1;
    while(m > 0)
    {
        if(m & 1)
            res = res*a%mod;
        a = a*a%mod;
        m >>= 1;
    }
    return res;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll j = 3;
        ll prev = m;
        ll mult = m;
        ll ans = 0;
        for(ll i = 1; i < n; i++)
        {
            ans += mult;
            ans %= mod;
            prev = prev*mult;
            prev %= mod;
            mult = power(prev,j)%mod;
            j += 2;
            //cout<<prev<<" "<<mult<<endl;
        }
        ans += mult;
        cout<<ans%mod<<endl;
    }
    return 0;
}
