#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
    ll n,k;
    cin>>n>>k;
    map<ll,ll>m;
    for(ll i = 0; i <n ;i++)
    {
        ll a;
        cin>>a;
        m[a]++;
    }
    ll arr[k+1];
    for(ll i = 1; i <= k; i++)
        cin>>arr[i];
    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >q;
    vector<vector<ll> >ans(n);
    ll index = 0;
    while(k>0 && m[k] == 0)
        k--;
    q.push(mp(1,0));
    ans[0].pb(k);
    m[k]--;
    while(k > 0)
    {
        ll fi = q.top().first;
        ll se = q.top().second;
        q.pop();
        while(m[k] == 0 && k > 0)
            k--;
        if(fi < arr[k] && k > 0)
        {
            ans[se].pb(k);
            q.push(mp(fi+1,se));
            m[k]--;
            continue;
        }
        else if(k > 0)
        {
            index++;
            ans[index].pb(k);
            q.push(mp(1,index));
            q.push(mp(fi,se));
            m[k]--;
        }
    }
    cout<<index+1<<endl;
    for(ll i = 0; i <= index; i++)
    {
        cout<<ans[i].size()<<" ";
        for(ll j = 0; j < ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
