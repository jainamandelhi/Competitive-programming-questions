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
	cin>>n;
	ll m = n;
    for(ll i = sqrt(n); i >= 2; i--)
    {
        while(n%i == 0)
            n /= i;
    }
    if(n == m)
    {
        cout<<1;
        return 0;
    }
    if(m%2 == 0)
    {
        cout<<2;
        return 0;
    }
    n = m-2;
    for(ll i = sqrt(n); i >= 2; i--)
    {
        while(n%i == 0)
            n /= i;
    }
    m -= 2;
    if(n == m)
        cout<<2;
    else
        cout<<3;
}
