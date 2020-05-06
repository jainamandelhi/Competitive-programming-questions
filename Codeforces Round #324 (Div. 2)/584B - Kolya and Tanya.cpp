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
ll power(ll a, ll n)
{
    if(n == 0)
        return 1;
    ll ans = power(a,n/2)%mod;
    ans = (ans * ans)%mod;
    if(n % 2)
        ans = ans * a;
    return ans % mod;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    cout<<(power(3ll,3*n)%mod - power(7ll,n)%mod + mod)%mod;
    return 0;
}
