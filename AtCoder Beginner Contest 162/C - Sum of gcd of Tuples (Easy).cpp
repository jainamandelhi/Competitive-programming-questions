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
    ll n;
    cin>>n;
    ll ans = 0;
    for(ll i = 1; i <= n; i++)
    {
        for(ll j = 1; j <= n; j++)
        {
            for(ll k = 1; k <= n; k++)
            {
                ans += gcd(i,gcd(j,k));
            }
        }
    }
    cout<<ans;
}
