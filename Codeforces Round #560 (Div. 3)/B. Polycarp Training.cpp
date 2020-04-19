#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0,j=1;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>=j)
        {
            ans++;
            j++;
        }
    }
    cout<<ans;
}
