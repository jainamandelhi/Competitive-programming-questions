#include<bits/stdc++.h>
using namespace std;
#define fi first
#define mp make_pair
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
    ll n,m,maxi=INT_MIN;
    cin>>n>>m;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<pair<ll,ll> >v;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb(mp(a,b));
    }
    vector<ll>ans1;
    for(ll i=0;i<n;i++)
    {
        vector<ll>ans;
        vector<ll>arr1(n);
        arr1=arr;
        for(ll j=0;j<m;j++)
        {
            if(v[j].first-1<=i && v[j].second-1>=i)
            {
                ans.pb(j+1);
                for(ll k=v[j].first-1;k<=v[j].second-1;k++)
                    arr1[k]--;
            }
        }
        sort(arr1.begin(),arr1.end());
        ll a=arr1[n-1]-arr1[0];
        if(a>maxi){
            maxi=a;
            ans1=ans;
        }
    }
    cout<<maxi<<endl;
    cout<<ans1.size()<<endl;
    for(ll g=0;g<ans1.size();g++)
        cout<<ans1[g]<<" ";
    return 0;
}
