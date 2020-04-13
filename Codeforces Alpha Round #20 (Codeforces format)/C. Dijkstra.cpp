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
void print(vector<ll>&parent,int i)
{
    if(i == 0)
        return;
    print(parent,parent[i]);
    cout<<i<<" ";
}
priority_queue<pair<ll,pair<ll,ll> >,vector<pair<ll,pair<ll,ll> > >,greater<pair<ll,pair<ll,ll> > > >q;
vector<vector<pair<ll,ll> > >arr(100002);
vector<ll>parent(100002);
vector<ll>dis(100002,INT_MAX);
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n,m;
	cin>>n>>m;

	for(ll i = 0; i < m; i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        arr[a].pb(mp(b,c));
        arr[b].pb(mp(a,c));
    }

   // priority_queue<pair<ll,pair<ll,ll> > >q;
    dis[1] = 0;
    q.push(mp(0,mp(1,0)));
    unordered_set<ll>s;
    while(!q.empty())
    {
        ll a = q.top().first;
        ll b = q.top().second.first;
        ll c = q.top().second.second;
        q.pop();
        if(s.find(b) != s.end())
            continue;
        s.insert(b);
       // cout<<a<<" "<<b<<" "<<c<<endl;
        parent[b] = c;
        for(ll i = 0; i < arr[b].size(); i++)
        {
            ll p = arr[b][i].first;
            ll qu = arr[b][i].second;
            if(s.find(p) != s.end())
                continue;
            q.push(mp(qu+a,mp(p,b)));
            dis[p] = qu+a;
        }
    }
    if(parent[n] == 0)
    {
        cout<<-1;
        return 0;
    }
    print(parent,n);
}
