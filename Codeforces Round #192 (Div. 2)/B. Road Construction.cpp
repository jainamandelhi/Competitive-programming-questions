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
ll maxi=-1;
void bfs(ll it, ll jt,ll **v,ll **vis,ll n,ll m)
{
    queue<pair<ll,ll> >q;
    q.push(mp(it,jt));
    vis[it][jt]=1;
    ll temp=0;
    while(!q.empty())
    {
        ll i=q.front().first;
        ll j=q.front().second;
        q.pop();
        temp++;
        if(i+1<n && v[i+1][j]==1 && vis[i+1][j]==0)
        {
            vis[i+1][j]=1;
            q.push(mp(i+1,j));
        }
        if(j+1<m && v[i][j+1]==1 && vis[i][j+1]==0)
        {
            vis[i][j+1]=1;
            q.push(mp(i,j+1));
        }
        if(i-1>=0 && v[i-1][j]==1 && vis[i-1][j]==0)
        {
            vis[i-1][j]=1;
            q.push(mp(i-1,j));
        }
        if(j-1>=0 && v[i][j-1]==1 && vis[i][j-1]==0)
        {
            vis[i][j-1]=1;
            q.push(mp(i,j-1));
        }
        if(i+1<n && j+1<m && v[i+1][j+1]==1 && vis[i+1][j+1]==0)
        {
            vis[i+1][j+1]=1;
            q.push(mp(i+1,j+1));
        }
        if(i+1<n && j-1>=0 && v[i+1][j-1]==1 && vis[i+1][j-1]==0)
        {
            vis[i+1][j-1]=1;
            q.push(mp(i+1,j-1));
        }
        if(i-1>=0 && j+1<m && v[i-1][j+1]==1 && vis[i-1][j+1]==0)
        {
            vis[i-1][j+1]=1;
            q.push(mp(i-1,j+1));
        }
        if(i-1>=0 && j-1>=0 && v[i-1][j-1]==1 && vis[i-1][j-1]==0)
        {
            vis[i-1][j-1]=1;
            q.push(mp(i-1,j-1));
        }
    }
    maxi=max(maxi,temp);
}
int main()
{
    fast;
    ll n,t;
    cin>>n>>t;
    ll *v=new ll[n+1];
    for(ll i=1;i<n+1;i++)
        v[i]=1;
    for(ll i=0;i<t;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a]=0;
        v[b]=0;
    }
    ll temp;
    for(ll i=1;i<=n;i++)
    {
        if(v[i]!=0)
        {
            temp=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(ll i=1;i<n+1;i++)
    {
        if(i==temp)
            continue;
        cout<<i<<" "<<temp<<endl;
    }
    return 0;
}
