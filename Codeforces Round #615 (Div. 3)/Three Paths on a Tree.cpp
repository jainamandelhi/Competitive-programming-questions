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
ll a,maxi=INT_MIN,b;
vector<ll>ans;
vector<vector<ll> >v(200002);
ll root;
void dfs(ll i,ll cnt,vector<ll>&vis)
{
    vis[i]=1;
    for(ll j=0;j<v[i].size();j++)
    {
        if(vis[v[i][j]]==0)
        {
            dfs(v[i][j],cnt+1,vis);
        }
    }
    if(cnt>maxi)
    {
        maxi=cnt;
        root=i;
    }
}
void dfs1(ll a, ll cnt, vector<ll>&temp,vector<ll>&vis)
{
    vis[a]=1;
    for(ll i=0;i<v[a].size();i++)
    {
        if(vis[v[a][i]]==0)
        {
            temp.pb(v[a][i]);
            dfs1(v[a][i],cnt+1,temp,vis);
            temp.pop_back();
        }
    }
    if(cnt>maxi)
    {
        maxi=cnt;
        ans=temp;
    }
}
ll ans1=0;
ll h;
void dfs2(ll a,ll cnt,vector<ll>&vis)
{
    vis[a]=1;
    for(ll i=0;i<v[a].size();i++)
    {
        if(vis[v[a][i]]==0)
        {
            dfs2(v[a][i],cnt+1,vis);
        }
    }
    if(cnt>ans1)
    {
        h=a;
        ans1=cnt;
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
        //cout<<3533;
    }
    vector<ll>vis(n+1);
    for(ll i=1;i<=n;i++)
    {
        if(v[i].size()==1)
        {
            root=i;
            break;
        }
    }
    //cout<<root<<endl;
    dfs(root,0ll,vis);
    maxi=INT_MIN;
    vis=vector<ll>(n+1);
    dfs(root,0ll,vis);
    maxi=INT_MIN;
    vis=vector<ll>(n+1);
    vector<ll>temp;
    temp.pb(root);
    dfs1(root,0ll,temp,vis);
    vis=vector<ll>(n+1);
    for(ll i=0;i<ans.size();i++)
        vis[ans[i]]=1;
    ll t1=0;
    h=ans[1];
    ll h1=h;
    for(ll i=0;i<ans.size();i++)
    {
        ans1=0;
        a=ans[i];
        dfs2(a,0ll,vis);
        if(ans1>t1)
        {
            h1=h;
            t1=ans1;
        }
    }
    cout<<ans.size()+t1-1<<endl<<ans[0]<<" "<<ans[ans.size()-1];
    cout<<" "<<h1;
}
