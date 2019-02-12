#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    ll ans=n;
    ll a=n;
    priority_queue<ll,vector<ll>,greater<ll> > p;
    for(int i=1;i<n;i++)
        p.push(arr[i]-arr[i-1]);
    while(a>k)
    {
        ans+=p.top();
        p.pop();
        ans--;
        a--;
    }
    cout<<ans ;
    return 0;
}
