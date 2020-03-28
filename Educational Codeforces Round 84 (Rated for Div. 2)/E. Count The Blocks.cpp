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
ll power(ll a,ll b)
{
    if(b == 0)
        return 1;
    ll res = power(a,b/2)%mod;
    res = (res%mod*res%mod)%mod;
    if(b%2)
        res = (res%mod * a%mod)%mod;
    return res%mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        ll ans = 0;
        if(i == n)
        {
            cout<<10;
            break;
        }
        ans = (ans%mod + (10*9*2*power(10,n-i-1)%mod)%mod)%mod;
        ans = (ans%mod + (n-i-1)*(10*9*9*power(10,n-i-2)%mod)%mod)%mod;
        cout<<ans%mod<<" ";
    }
}
