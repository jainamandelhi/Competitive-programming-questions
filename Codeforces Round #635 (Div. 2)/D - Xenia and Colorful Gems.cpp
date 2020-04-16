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
ll ans;
void fn(vector<ll>&a,vector<ll>&b,vector<ll>&c)
{
    for(ll i = 0; i < a.size(); i++)
    {
        auto y = lower_bound(b.begin(),b.end(),a[i]);
        if(y == b.end())
            continue;
        ll mid = *y+a[i];
        mid /= 2;
        auto z = lower_bound(c.begin(),c.end(),mid);
        if(z != c.end())
            ans = min(ans,(a[i]-*y)*(a[i]-*y) + (*y-*z)*(*y-*z) + (a[i]-*z)*(a[i]-*z));
        if(z != c.begin()){
            z--;
            ans = min(ans,(a[i]-*y)*(a[i]-*y) + (*y-*z)*(*y-*z) + (a[i]-*z)*(a[i]-*z));
        }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ans = 9e18;
        ll nr,ng,nb;
        cin>>nr>>ng>>nb;
        vector<vector<ll> >v(3);
        for(ll i = 0; i < nr; i++)
        {
            ll a;
            cin>>a;
            v[0].pb(a);
        }
        for(ll i = 0; i < ng; i++)
        {
            ll a;
            cin>>a;
            v[1].pb(a);
        }
        for(ll i = 0; i < nb; i++)
        {
            ll a;
            cin>>a;
            v[2].pb(a);
        }
        for(ll i = 0; i < 3; i++)
            sort(v[i].begin(),v[i].end());
        fn(v[0],v[1],v[2]);
        fn(v[0],v[2],v[1]);
        fn(v[1],v[0],v[2]);
        fn(v[1],v[2],v[0]);
        fn(v[2],v[1],v[0]);
        fn(v[2],v[0],v[1]);
        cout<<ans<<endl;
    }
}
