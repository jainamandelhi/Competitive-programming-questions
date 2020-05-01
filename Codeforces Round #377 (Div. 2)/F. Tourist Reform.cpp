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
ll vis[400001];
ll low[400001];
ll in[400001];
ll timer;
set<pair<ll,ll> >see;
vector<pair<ll,ll> >ans1,temp;
map<pair<ll,ll> ,ll>ma;
map<pair<ll,ll>, ll >ans;
void dfs(ll i,ll p,vector<vector<ll> >&v)
{
    in[i] = low[i] = timer++;
    vis[i] = 1;
    for(ll j = 0; j < v[i].size(); j++)
    {
        if(v[i][j] == p)
            continue;
        if(vis[v[i][j]])
        {
            low[i] = min(low[i],in[v[i][j]]);
            if(in[i] > in[v[i][j]])
                ans[mp(i,v[i][j])] = - 1;
            continue;
        }
        dfs(v[i][j],i,v);
        if(low[v[i][j]] <= in[i])
            ans1.pb(mp(i,v[i][j]));
        else
            temp.pb(mp(i,v[i][j]));
        low[i] = min(low[i],low[v[i][j]]);
        ans[mp(i,v[i][j])] = -1;
    }
}
ll f(ll i, vector<ll>&arr)
{
    while(i != arr[i])
        i = arr[i];
    return i;
}
void dsu(ll a,ll b, vector<ll>&arr,vector<ll>&siz)
{
    ll root1 = f(a,arr);
    ll root2 = f(b,arr);
    if(siz[root1] >= siz[root2])
    {
        siz[root1] += siz[root2];
        arr[root2] = arr[root1];
    }
    else
    {
        siz[root2] += siz[root1];
        arr[root1] = arr[root2];
    }
}
void dfs1(ll root,vector<vector<ll> >&v)
{
    vis[root] = 2;
    for(ll i = 0; i < v[root].size(); i++)
    {
        if(vis[v[root][i]] == 2)
            continue;
        ll a = root;
        ll b = v[root][i];
        if(see.find(mp(root,v[root][i])) != see.end())
        {
            ans[mp(b,a)] = -1;
            ma[mp(b,a)] = ma[mp(a,b)];
            ans[mp(a,b)] = 100;
        }
        dfs1(v[root][i],v);
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    scanf("%lld%lld",&n,&m);
    vector<vector<ll> >v(n+1);
    for(ll i = 0; i < m; i++)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        v[a].pb(b);
        v[b].pb(a);
        ma[mp(a,b)] = i;
        ma[mp(b,a)] = i;
    }
    dfs(1,1,v);
    vector<ll>arr(n+1);
    for(ll i = 0; i < n+1; i++)
        arr[i] = i;
    vector<ll>siz(n+1,1);
    for(ll i = 0; i < ans1.size(); i++)
    {
        ll a = ans1[i].first;
        ll b = ans1[i].second;
        dsu(a,b,arr,siz);
    }
    ll cnt = 0;
    map<pair<ll,ll> ,ll> :: iterator itr;
    cnt = INT_MIN;
    ll root;
    for(ll i = 1; i <= n; i++){
        if(cnt < siz[f(i,arr)])
        {
            cnt = siz[f(i,arr)];
            root = i;
        }
        //cout<<siz[f(i,arr)]<<" "<<cnt<<endl;
    }
    //cout<<endl;
   // cout<<cnt<<endl;
    for(ll i = 0; i < temp.size(); i++)
    {
        see.insert(mp(temp[i].first,temp[i].second));
        see.insert(mp(temp[i].second,temp[i].first));
    }
    dfs1(root,v);
   /* for(ll i = 0; i < temp.size(); i++)
    {
       // cout<<itr->first.first<<" "<<itr->first.second<<endl;
        if(siz[f(temp[i].first,arr)] <= siz[f(temp[i].second,arr)])
        {
            //cout<<itr->first.first<<" "<<itr->first.second<<endl;
            //ll a = f(itr -> first.first,arr);
            //siz[a] += siz[f(itr -> first.second,arr)];
            //arr[f(temp[i].first,arr)] = arr[f(temp[i].second,arr)];
        }
        else
        {
           // cout<<itr->first.first<<" "<<itr->first.second<<endl;
            //ll root = f(itr -> first.second,arr);
           // siz[root] += siz[f(itr -> first.first,arr)];
            //arr[f(temp[i].second,arr)] = arr[f(temp[i].first,arr)];
            ll a = temp[i].first;
            ll b = temp[i].second;
            ans[mp(b,a)] = -1;
            ma[mp(b,a)] = ma[mp(a,b)];
            ans[mp(a,b)] = 100;
            //ans.erase(mp(a,b));
            //itr--;
        }
        //cout<<itr->first.first<<" "<<itr->first.second<<endl;
    }*/
    /*for(ll i = 1; i <= n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(ll i = 1; i <= n; i++)
        cout<<siz[i]<<" ";
    cout<<endl;*/
    printf("%lld\n",cnt);
    vector<pair<ll,ll> >out(m);
    for(itr = ans.begin(); itr != ans.end(); itr++)
    {
        ll a = itr -> first.first;
        ll b = itr -> first.second;
        if(ans[mp(a,b)] == 100)
            continue;
        out[ma[mp(a,b)]] = mp(a,b);
    }
    for(ll i = 0; i < out.size(); i++)
        printf("%lld %lld\n",out[i].first,out[i].second);
    return 0;
}
