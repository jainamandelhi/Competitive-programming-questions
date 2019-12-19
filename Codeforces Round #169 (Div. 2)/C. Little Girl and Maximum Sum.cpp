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
    ll n,q;
    cin>>n>>q;
    vector<ll>v1(n,0);
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,greater<ll>());
    vector<pair<ll,ll> >arr1;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        arr1.pb(mp(a,b));
        v1[a]++;
        if(b!=n-1)
            v1[b+1]--;
    }
    for(ll i=1;i<n;i++)
        v1[i]+=v1[i-1];
    vector<pair<ll,ll> >v2;
    for(ll i=0;i<n;i++)
    {
        v2.pb(mp(v1[i],i));
    }
    sort(v2.rbegin(),v2.rend());
    vector<ll>v3(n);
    for(ll i=0;i<n;i++)
    {
        v3[v2[i].second]=arr[i];
    }
    ll cost=0;
    for(ll i=1;i<n;i++)
        v3[i]+=v3[i-1];
    for(ll i=0;i<arr1.size();i++)
    {
        cost+=v3[arr1[i].second];
        if(arr1[i].first>0)
            cost-=v3[arr1[i].first-1];
    }
   /* for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(ll i=0;i<n;i++)
        cout<<v3[i]<<" ";
    cout<<endl;*/
    cout<<cost;
}
