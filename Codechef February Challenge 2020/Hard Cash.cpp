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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n],arr1[n],arr2[n];
        ll k;
        cin>>k;
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        for(ll i=0;i<n;i++)
        {
            arr1[i]=arr[i]%k;
            if(arr[i]%k==0)
                arr2[i]=0;
            else
                arr2[i]=k-arr[i]%k;
        }
        for(ll i=1;i<n;i++)
        {
            arr1[i]+=arr1[i-1];
        }
        for(ll i=n-2;i>=0;i--)
        {
            arr2[i]+=arr2[i+1];
        }
        ll mini=arr1[n-1];
        for(ll i=0;i<n-1;i++)
        {
            ll a=arr1[i]-arr2[i+1];
            if(a<0)
                continue;
            a=a%k;
            mini=min(mini,a);
        }
        cout<<mini<<endl;
    }
}
