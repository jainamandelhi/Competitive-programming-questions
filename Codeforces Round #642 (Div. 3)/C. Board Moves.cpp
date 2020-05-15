/* Isn't passion overrated? */

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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x = n/2;
        ll cnt = 1;
        ll ans = 0;
        ll mul = 8;
        while(x--)
        {
            ans = ans + mul*cnt;
            cnt++;
            mul += 8;
        }
        cout<<ans<<endl;
    }
    return 0;
}
