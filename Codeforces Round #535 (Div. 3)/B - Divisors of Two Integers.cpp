#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    ll n,maxi=-1;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        m[a]++;
        if(a>maxi)
            maxi=a;
    }
    cout<<maxi<<" ";
    map<ll,ll>::iterator itr;
    vector<ll>arr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(maxi%(itr->first)==0)
            itr->second--;
    }
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second>0)
            arr.pb(itr->first);
    }
    cout<<arr[arr.size()-1];
    return 0;
}
