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
    ll n;
    cin>>n;
    ll k;
    cin>>k;
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.pb(mp(a,i+1));
    }
    sort(v.rbegin(),v.rend());
    for(ll i=0;i<n-k;i++)
        v.pop_back();
    ll sum=0;
    for(ll i=0;i<k;i++)
        sum=(sum+v[i].first);
    for(ll i=0;i<k;i++)
        swap(v[i].first,v[i].second);
    ll cnt=1;
    sort(v.begin(),v.end());
    for(ll i=1;i<k;i++)
        cnt = (cnt%mod*(v[i].first%mod-v[i-1].first%mod)%mod)%mod;
    cout<<sum<<" "<<cnt%mod;
}
