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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    ll n = s.size();
    ll cnt = 0;
    ll ans = 0;
    for(ll i = n-1; i >= 0; i--)
    {
        if(s[i] == 'b')
            cnt++;
        else
        {
            ans += cnt;
            ans %= mod;
            cnt *= 2;
        }
        cnt %= mod;
    }
    cout<<ans;
    return 0;
}
