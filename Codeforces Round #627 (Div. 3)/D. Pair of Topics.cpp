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
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr1[n];
        ll arr2[n];
        for(ll i=0;i<n;i++)
            cin>>arr1[i];
        for(ll i=0;i<n;i++)
            cin>>arr2[i];
        ll arr3[n];
        for(ll i=0;i<n;i++)
            arr3[i]=arr1[i]-arr2[i];
        sort(arr3,arr3+n);
        ll arr4[n];
        for(ll i=0;i<n;i++)
            arr4[i]=arr3[i]*(-1);
       /* for(ll i=0;i<n;i++)
            cout<<arr1[i]<<" ";
        cout<<endl;
        for(ll i=0;i<n;i++)
            cout<<arr2[i]<<" ";*/
        ll i=0,j=n-1;
        ll ans=0;
        while(j>i)
        {
            while(arr3[j]<=arr4[i])
                i++;
            //cout<<i<<" ";
            if(j>i)
            ans=ans+j-i;
            j--;
        }
        cout<<ans<<endl;
    }
}
