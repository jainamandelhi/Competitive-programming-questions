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
    set<pair<ll,ll> >s;
    set<pair<ll,ll> >::iterator itr;
    for(ll i=0;i<10;i++)
    {
        ll a;
        cin>>a;
        for(ll j=0;j<9;j++)
        {
            ll b;
            cin>>b;
            ll c = a;
            if(c>b)
                swap(c,b);
            s.insert(mp(c,b));
        }
    }
   // for(itr=s.begin();itr!=s.end();itr++)
   //     cout<<itr->first<<" "<<itr->second<<endl;
    ll ans = n*(n-1);
    ans /= 2;
    ll m = s.size();
   // cout<<s.size()<<" ";
    cout<<ans-m;
}
