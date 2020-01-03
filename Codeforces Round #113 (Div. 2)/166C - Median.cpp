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
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[(n+1)/2-1]==m)
    {
        cout<<0;
        return 0;
    }
    arr.pb(m);
    sort(arr.begin(),arr.end());
    ll i=(n+2)/2;
    ll ans=1;
  //  for(ll i=0;i<arr.size();i++)
  //      cout<<arr[i]<<" ";
  //  cout<<endl;
    while(arr[i-1]<m)
    {
        if(arr.size()%2==0)
            i++;
        ans++;
        arr.pb(INT_MAX);
    }
    while(arr[i-1]>m)
    {
        if(arr.size()%2==1)
            i--;
        ans++;
        arr.pb(INT_MIN);
    }
    cout<<ans;
}
