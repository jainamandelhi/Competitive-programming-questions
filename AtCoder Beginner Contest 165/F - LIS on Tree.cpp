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
vector<vector<ll> >arr;
vector<ll>cost;
vector<ll>ans,out;
void dfs(ll root, ll parent)
{
    bool b = false;
    ll val = -1;
    ll idx = -1;
    vector<ll> :: iterator itr = lower_bound(ans.begin(),ans.end(),cost[root]);
    if(itr == ans.end())
    {
        ans.pb(cost[root]);
    }
    else
    {
        idx = itr - ans.begin();
        val = ans[idx];
        ans[idx] = cost[root];
        b = true;
    }
    out[root] = ans.size();
    for(ll i = 0; i < arr[root].size(); i++)
    {
        if(arr[root][i] == parent)
            continue;
        dfs(arr[root][i],root);
    }
    if(b)
    {
        ans[idx] = val;
    }
    else
    {
        ans.pop_back();
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    arr = vector<vector<ll> >(n+1);
    cost = vector<ll>(n+1);
    for(ll i = 1; i <= n; i++)
        cin>>cost[i];
    out = vector<ll>(n+1);
    for(ll i = 0; i < n-1; i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    dfs(1,-1);
    for(ll i = 1; i < out.size(); i++)
        cout<<out[i]<<endl;
    return 0;
}
