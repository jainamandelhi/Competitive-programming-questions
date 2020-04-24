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
ll vis[200010];
ll col[200010];
bool dfs(ll i, vector<vector<ll > >&arr, ll c)
{
    vis[i] = 1;
    col[i] = c;
    for(ll j = 0; j < arr[i].size(); j++)
    {
        if(vis[arr[i][j]])
        {
            continue;
        }
        dfs(arr[i][j],arr,!c);
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t = 1;
	for(ll tt = 1; tt <= t; tt++)
    {
        ll n,m;
        cin>>n;
        m = n-1;
        memset(vis,0,sizeof(vis));
        memset(col,-1,sizeof(col));
        vector<vector<ll> >arr(n+1);
        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            arr[a].pb(b);
            arr[b].pb(a);
        }
        for(ll i = 1; i <= n; i++)
        {
            if(vis[i])
                continue;
            dfs(i,arr,0);
        }
        ll zero = 0, one = 0;
        for(ll i = 1; i <= n; i++)
        {
            if(col[i])
                one++;
            else
                zero++;
        }
        cout<<one*zero-(n-1);
    }
    return 0;
}
