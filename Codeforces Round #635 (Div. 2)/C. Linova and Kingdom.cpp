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
vector<ll>lev(200005);
vector<ll>si(200005,1);
ll dfs(ll i,ll p,vector<vector<ll> >&v)
{
    lev[i] = lev[p]+1;
    for(ll j = 0; j < v[i].size(); j++)
    {
        if(p == v[i][j])
            continue;
        si[i] += dfs(v[i][j],i,v);
    }
    return si[i];
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<vector<ll> >v(n+1);
    for(ll i = 0; i < n-1; i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    vector<ll>arr;
    dfs(1,0,v);
    for(ll i = 1; i <= n; i++)
        cout<<lev[i]<<" ";
    cout<<endl;
    for(ll i = 1; i <= n; i++)
        cout<<si[i]<<" ";
    cout<<endl;
    for(ll i = 1; i <= n; i++)
        arr.pb(lev[i]-si[i]);
    sort(arr.rbegin(),arr.rend());
    ll ans = 0;
    for(ll i = 0; i < k; i++)
        ans += arr[i];
    cout<<ans;
}
