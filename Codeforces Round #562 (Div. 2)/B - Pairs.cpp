#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
ll temp=0,ans=0,des,st,k;
vector<vector<ll> >v;
vector<ll>vis;
void dfs(ll st)
{
    if(st==des)
    {
        ans++;
        return;
    }
    vis[st]=1;
    for(ll i=0;i<v[st].size();i++)
    {
        if(vis[v[st][i]]==0)
            dfs(v[st][i]);
    }
    vis[st]=0;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll> >v(n+1);
    vector<pair<ll,ll> >p;
    ll x,y;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(i==0)
        {
            x=a;
            y=b;
        }
        p.pb(mp(a,b));
    }
    for(ll i=0;i<m;i++)
    {
        if(x==p[i].first || x==p[i].second)
            v[x].pb(i+1);
        else
        {
            v[p[i].first].pb(i+1);
            v[p[i].second].pb(i+1);
        }
    }
    map<ll,ll>ma;
    for(ll i=1;i<=n;i++)
    {
        if(i==x)
            continue;
        ma[v[i].size()]++;
    }
    map<ll,ll>::iterator itr;
    for(itr=ma.begin();itr!=ma.end();itr++)
    {
        if(itr->first+v[x].size()==m)
        {
            cout<<"YES";
            return 0;
        }
    }
    vector<vector<ll> >v1(n+1);
    for(ll i=0;i<m;i++)
    {
        if(y==p[i].first || y==p[i].second)
            v1[y].pb(i+1);
        else
        {
            v1[p[i].first].pb(i+1);
            v1[p[i].second].pb(i+1);
        }
    }
    map<ll,ll>m1;
    for(ll i=1;i<=n;i++)
    {
        if(i==y)
            continue;
        m1[v1[i].size()]++;
    }
    //map<ll,ll>::iterator itr;
    for(itr=m1.begin();itr!=m1.end();itr++)
    {
        if(itr->first+v1[y].size()==m)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
