#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    int arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0;
    if(x>y)
        cout<<n;
    else{
        for(ll i=0;i<n;i++)
        {
            if(2*i+1<=n && arr[2*i]<=x)
                ans++;
        }
    cout<<ans;
    }
    return 0;
}
