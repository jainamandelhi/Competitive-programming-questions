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
    ll arr[3];
    for(ll i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3,greater<ll>());
    if(arr[0]==arr[1] && arr[0]==arr[2])
        cout<<0;
    else if(arr[0]==arr[1])
        cout<<arr[0]-arr[2]-1;
    else if(arr[1]==arr[2])
        cout<<(arr[0]-arr[1]-1)*2;
    else
        cout<<arr[0]-arr[1]-1+arr[0]-arr[2]-1;
    return 0;
}
