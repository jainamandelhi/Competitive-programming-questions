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
    ll m;
    cin>>m;
    ll arr[n];
    for(ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    ll ans = 1;
    if(m < n)
    {
        cout<<0;
        return 0;
    }
    for(ll i = 0; i < n; i++)
    {
        for(ll j = i+1; j < n; j++)
        {
            ans = ans*abs(arr[i]-arr[j]);
            ans %= m;
        }
    }
    cout<<ans;
}
