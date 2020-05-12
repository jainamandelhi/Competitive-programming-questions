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
ll power(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll ans = power(a, b/2);
    ans = ans * ans;
    ans %= mod;
    if( b % 2 )
        ans *= a ;
    return ans % mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll ans = power(2ll,m) % mod - 1;
    ans += mod;
    ans %= mod;
    ans = power(ans,n) % mod;
    cout<<ans % mod;
    return 0;
}
