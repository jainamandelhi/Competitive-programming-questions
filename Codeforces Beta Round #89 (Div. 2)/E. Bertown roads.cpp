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
ll vis[100001];
ll low[100001];
ll in[100001];
ll cnt = 0;
vector<pair<ll,ll> >ans;
bool flag = true;
void dfs(ll i, ll p,vector<vector<ll> >&v)
{
    vis[i] = 1;
    low[i] = in[i] = cnt++;
    for(ll j = 0; j < v[i].size(); j++)
    {
        if(v[i][j] == p)
            continue;
        if(vis[v[i][j]])
        {
            low[i] = min(low[i],in[v[i][j]]);
            if(in[i] > in[v[i][j]])
                ans.pb(mp(i,v[i][j]));
        }
        else
        {
            dfs(v[i][j],i,v);
            if(low[v[i][j]] > in[i])
            {
                flag = false;
                return;
            }
            low[i] = min(low[i],low[v[i][j]]);
            ans.pb(mp(i,v[i][j]));
        }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<vector<ll> >v(n+1);
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    dfs(1,1,v);
    if(!flag)
        cout<<0;
    else
    {
        for(ll i = 0; i < ans.size(); i++)
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}
