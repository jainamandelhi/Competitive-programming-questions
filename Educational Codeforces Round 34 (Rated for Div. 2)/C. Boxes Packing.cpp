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
    map<ll,ll>m;
    ll arr[n];
    for(ll i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        m[a]++;
        arr[i] = a;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++)
    {
        if(m.upper_bound(arr[i]) == m.end())
            ans++;
        else
        {
            ll a = m.upper_bound(arr[i]) -> first;
            m[a]--;
            if(m[a] == 0)
                m.erase(a);
        }
    }
    cout<<ans;
    return 0;
}
