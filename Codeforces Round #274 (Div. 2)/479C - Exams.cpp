#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
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
    vector<pair<ll,ll> >v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    sort(v.begin(),v.end());
    ll temp=v[0].second;
    for(ll i=1;i<n;i++)
    {
        if(v[i].second>=temp)
            temp=v[i].second;
        else
            temp=v[i].first;
    }
    cout<<temp;
}
