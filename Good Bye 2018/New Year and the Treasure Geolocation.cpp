#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll> >v1,v2;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v1.pb(mp(a,b));
    }
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v2.pb(mp(a,b));
    }
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(),v2.rend());
    cout<<v1[0].first+v2[0].first<<" "<<v1[0].second+v2[0].second;
    return 0;
}
