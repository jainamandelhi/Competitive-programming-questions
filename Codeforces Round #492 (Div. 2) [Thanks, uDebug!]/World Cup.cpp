#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++)
    {
        ll a=ceil(double(arr[i]-i)/n);
        if(a==0)
        {
            cout<<i+1;
            return 0;
        }
        a*=n;
        v.pb(mp(a,i+1));
    }
    sort(v.begin(),v.end());
    cout<<v[0].second;
    return 0;
}
