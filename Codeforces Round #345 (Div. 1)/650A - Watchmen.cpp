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
    map<pair<ll,ll>,ll >v;
    map<ll,ll>x,y;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[mp(a,b)]++;
        x[a]++;
        y[b]++;
    }
    ll ans=0;
    map<ll,ll>::iterator itr;
    map<pair<ll,ll>,ll >::iterator it;
    for(itr=x.begin();itr!=x.end();itr++)
    {
        ll a=itr->second;
        a=a*(a-1);
        a/=2;
        ans+=a;
    }
    for(itr=y.begin();itr!=y.end();itr++)
    {
        ll a=itr->second;
        a=a*(a-1);
        a/=2;
        ans+=a;
    }
    for(it=v.begin();it!=v.end();it++)
    {
       ll a=it->second;
        a=a*(a-1);
        a/=2;
        ans=ans-a;
    }
    cout<<ans;
}
