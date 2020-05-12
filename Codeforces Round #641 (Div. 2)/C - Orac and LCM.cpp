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
    ll n;
    cin>>n;
    ll arr[n];
    vector<ll>prime(200010);
    vector<ll>temp;
    for(ll i = 2; i <= sqrt(200010); i++)
    {
        if(prime[i] == 1)
            continue;
        for(ll j = 2; i*j < 200010; j++)
            prime[i*j] = 1;
    }
    for(ll i = 2; i < 200010; i++)
    {
        if(prime[i] == 0)
            temp.pb(i);
    }
    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    map<ll,vector<ll> >m;
    for(ll i = 0; i < n; i++)
    {
        ll a = arr[i];
        for(ll j = 0; j < temp.size(); j++)
        {
            if(a == 1)
                break;
            ll c = 0;
            if(temp[j] > sqrt(a))
            {
                m[a].pb(1);
                break;
            }
            while(a % temp[j] == 0 && a != 1)
            {
                a /= temp[j];
                c++;
            }
            if(c)
                m[temp[j]].pb(c);
        }
    }
    ll ans = 1;
    for(ll i = 0; i <temp.size(); i++)
    {
        if(m[temp[i]].size() < n-1)
            continue;
        sort(m[temp[i]].begin(), m[temp[i]].end());
        ll o;
        if(m[temp[i]].size() == n-1)
            o = m[temp[i]][0];
        else
            o = m[temp[i]][1];
        while(o--)
            ans = ans * temp[i];
    }
    cout<<ans;
    return 0;
}
