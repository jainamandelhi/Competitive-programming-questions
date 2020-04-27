#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,set<ll> >m;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            m[a].insert(i);
        }
        map<ll,set<ll> > :: iterator itr;
        ll ans = 1;
        set<ll> :: iterator itr1;
        itr1 = m.begin()->second.begin();
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second.lower_bound(*itr1) != itr->second.end())
            {
                itr1 = itr->second.lower_bound(*itr1);
            }
            else
            {
                ans++;
                itr1 = itr -> second.begin();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
