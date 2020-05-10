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
ll n,m,k;
ll ans = 100000000001;
vector<vector<ll> >v(13);
vector<ll>cost;
vector<ll>check;
void dfs(ll i, ll c)
{
    if(i == n)
    {
        for(ll j = 0; j < check.size(); j++)
            if(check[j] > 0)
                return;
        ans = min(ans,c);
        return;
    }
        for(ll k = 0; k < m; k++)
            check[k] -= v[i][k];
        dfs(i+1, c+cost[i]);
        for(ll k = 0; k < m; k++)
            check[k] += v[i][k];
        dfs(i+1,c);
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m>>k;
    for(ll i = 0; i < n; i++)
    {
        ll c;
        cin>>c;
        cost.pb(c);
        for(ll j = 0; j < m; j++)
        {
            ll a;
            cin>>a;
            v[i].pb(a);
        }
    }
    for(ll i = 0; i < m; i++)
        check.pb(k);
    dfs(0ll,0ll);
    if(ans == 100000000001)
        ans = -1;
    cout<<ans;
    return 0;
}
