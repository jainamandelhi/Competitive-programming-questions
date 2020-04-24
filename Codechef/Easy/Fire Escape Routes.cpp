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
ll vis[100010];
ll dfs(ll i, vector<vector<ll> >&arr)
{
    vis[i] = 1;
    ll ans = 1;
    for(ll j = 0; j < arr[i].size(); j++)
    {
        if(vis[arr[i][j]])
            continue;
        ans += dfs(arr[i][j],arr);
    }
    return ans;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
    {
        ll n,m;
        cin>>n>>m;
        memset(vis,0,sizeof(vis));
        vector<vector<ll> >arr(n+1);
        for(ll i = 0; i < m; i++)
        {
            ll a,b;
            cin>>a>>b;
            arr[a].pb(b);
            arr[b].pb(a);
        }
        ll ans = 1;
        ll cnt = 0;
        for(ll i = 1; i <= n; i++)
        {
            if(vis[i])
                continue;
            ll temp = dfs(i,arr);
            cnt++;
            ans = temp%mod * ans%mod;
            ans %= mod;
        }
        cout<<cnt<<" "<<ans<<endl;
    }
    return 0;
}
