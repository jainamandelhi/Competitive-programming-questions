#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll> >arr,v;
    vector<ll>ans;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        arr.pb(mp(a,i+1));
    }
    ll sum=0;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<k;i++)
    {
        v.pb(mp(arr[i].second,arr[i].first));
        sum+=arr[i].first;
    }
    sort(v.begin(),v.end());
    if(k==1)
    {
        cout<<v[0].second<<endl;
        cout<<n;
        return 0;
    }
    cout<<sum<<endl;
    for(int i=0;i<k;i++)
    {
        if(i==0)
            cout<<v[i].first<<" ";
        else if(i==k-1)
            cout<<n-v[i-1].first;
        else
            cout<<v[i].first-v[i-1].first<<" ";
    }
    return 0;
}
