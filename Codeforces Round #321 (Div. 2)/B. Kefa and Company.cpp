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
    vector<pair<ll,ll> >v;
    v.pb(mp(0,0));
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    sort(v.begin(),v.end());
    ll i=1,j=1;
    for(ll i=1;i<=n;i++)
    {
        v[i].second+=v[i-1].second;
    }
    i=1;
    ll ans=0;
    while(j<=n)
    {
        if(v[j].first-v[i].first>=m)
        {
            ans=max(ans,v[j-1].second-v[i-1].second);
            i++;
        }
        else
            j++;
    }
    j--;
    if(v[j].first-v[i].first<=m)
        ans=max(ans,v[j].second-v[i-1].second);
    cout<<ans;
}
