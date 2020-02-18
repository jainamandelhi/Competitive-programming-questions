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
        ll arr1[n],arr2[n];
        for(ll i=0;i<n;i++)
            cin>>arr1[i];
        for(ll i=0;i<n;i++)
            cin>>arr2[i];
        ll ans=0;
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        for(ll i=0;i<n;i++)
        {
            ans+=min(arr1[i],arr2[i]);
        }
        cout<<ans<<endl;
    }
}
