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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll> >arr(n+1);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    set<ll>s;
    priority_queue<ll,vector<ll>,greater<ll> >q;
    q.push(1);
    while(!q.empty())
    {
        while(q.size() && s.find(q.top())!=s.end())
            q.pop();
        if(!q.size())
            break;
        ll a=q.top();
        q.pop();
        s.insert(a);
        cout<<a<<" ";
        for(ll i=0;i<arr[a].size();i++)
            q.push(arr[a][i]);
    }
}
