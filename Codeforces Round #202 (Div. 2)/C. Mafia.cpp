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
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cnt=0,cnt1=1;
    for(ll i=0;i<n-1;i++)
    {
        cnt=cnt+arr[n-1]-arr[i];
    }
    if(cnt>=arr[n-1])
    {
        cout<<arr[n-1];
        return 0;
    }
    ll ans=0;
    ans+=cnt;
    ll a=arr[n-1]-cnt;
    ll m=n-1;
    ll t1=a/m;
    ll t2=a-a/m*m;
    ans=ans+t1*n;
    if(t2==0)
        ans--;
    cout<<ans+t2+1;
}
