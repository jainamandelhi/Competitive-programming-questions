#include <iostream>
#define ll long long
#define mp make_pair
#define pb push_back
#include <bits/stdc++.h>
using namespace std;
int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	vector<pair<ll,ll> >v;
	vector<pair<ll,ll> >v1;
	for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.pb(mp(a,i+1));
    }
    ll sum=0;
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<k*m;i++){
        v1.pb(mp(v[i].second,v[i].first));
        sum+=v[i].first;
    }
    sort(v1.begin(),v1.end());
    cout<<sum<<endl;
    ll j=m-1;
    for(ll i=0;i<k-1;i++)
    {
        cout<<v1[j].first<<" ";
            j+=m;
    }

	return 0;
}
