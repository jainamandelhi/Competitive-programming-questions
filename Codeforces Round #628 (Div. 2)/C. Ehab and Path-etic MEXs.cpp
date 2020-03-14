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
    ll n;
    cin>>n;
    vector<vector<ll> >arr(n+1);
    vector<pair<ll,ll> >v;
    //vector<ll>temp;
    for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
        v.pb(mp(a,b));
    }
    set<ll>s1;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i].size()==1)
            s1.insert(i);
    }
    ll h=0;
    set<ll>s;
    vector<ll>ans(n,-1);
    for(ll i=0;i<n-1;i++)
    {
        ll a=v[i].first;
        ll b=v[i].second;
        if(s1.find(a)!=s1.end() || s1.find(b)!=s1.end())
        {
            s.insert(h);
            ans[i]=h;
            h++;
        }
    }
    ll p=n-2;
    for(ll i=0;i<n-1;i++)
    {
        if(ans[i]==-1)
        {
            while(s.find(p)!=s.end())
                p--;
            s.insert(p);
            ans[i]=p;
            //p++;
        }
    }
    for(ll i=0;i<n-1;i++)
    cout<<ans[i]<<endl;
}
