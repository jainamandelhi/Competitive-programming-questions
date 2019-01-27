#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<pair<pair<ll,ll>,ll >>v(n);
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i].first.second=a;
    }
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i].second=a;
    }
    for(ll i=0;i<n;i++)
        v[i].first.first=v[i].first.second-v[i].second;
	sort(v.begin(),v.end());
	ll ans=0;
	for(ll i=0;i<k;i++)
        ans+=v[i].first.second;
    for(ll i=k;i<n;i++)
        if(v[i].first.first<0)
            ans+=v[i].first.second;
        else
            ans+=v[i].second;
    //for(ll i=0;i<n;i++)
    //{
     //   cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
   // }
	cout<<ans;
	return 0;
}
