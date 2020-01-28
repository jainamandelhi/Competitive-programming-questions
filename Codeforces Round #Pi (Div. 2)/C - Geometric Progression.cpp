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
	ll n,k;
	cin>>n>>k;
	map<ll,ll>m1;
	ll arr[n];
	for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<ll>arr1(n);
    vector<ll>arr2(n);
    for(ll i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            m1[arr[i]]++;
            continue;
        }
        arr1[i]=m1[arr[i]*k];
        m1[arr[i]]++;
    }
    map<ll,ll>m2;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            m2[arr[i]]++;
            continue;
        }
        if(arr[i]%k==0)
        {
            ans=ans+m2[arr[i]/k]*arr1[i];
        }
        m2[arr[i]]++;
    }
    cout<<ans;
}
