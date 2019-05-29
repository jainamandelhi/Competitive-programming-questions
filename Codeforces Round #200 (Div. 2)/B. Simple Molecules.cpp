#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
ll n,m;
ll dfs(ll i,ll j)
{
    if(i==0 || j==0)
        return 1;

    return dfs(i-1,j)+dfs(i,j-1);
}
void solve()
{
	ll a,b,c;
	cin>>a>>b>>c;
	vector<pair<ll,ll> >v;
	v.pb(mp(a,1));
	v.pb(mp(b,2));
	v.pb(mp(c,3));
	sort(v.begin(),v.end());
	a=v[2].first-v[0].first;
	vector<vector<ll> >ans(4,vector<ll>(4,0));
	v[1].first-=a;
	ans[min(v[1].second,v[2].second)][max(v[1].second,v[2].second)]+=a;
	v[2].first-=a;
	if(v[1].first>=0 && v[0].first==v[2].first && v[1].first%2==0)
    {
        ans[min(v[0].second,v[1].second)][max(v[0].second,v[1].second)]+=v[1].first/2;
        ans[min(v[1].second,v[2].second)][max(v[1].second,v[2].second)]+=v[1].first/2;
        a=v[1].first;
        v[1].first-=a;
        v[0].first-=a/2;
        v[2].first-=a/2;
        ans[min(v[0].second,v[2].second)][max(v[0].second,v[2].second)]+=v[0].first;
        ans[max(v[0].second,v[2].second)][min(v[0].second,v[2].second)]+=v[0].first;
        cout<<ans[1][2]<<" "<<ans[2][3]<<" "<<max(ans[1][3],ans[3][1]);
    }
    else
        cout<<"Impossible";
}
int main()
{
    ll t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
