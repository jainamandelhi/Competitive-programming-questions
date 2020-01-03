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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll temp=n;
    ll j=n-1;
    vector<ll>arr1(n);
    for(ll i=n/2-1;i>=0;i--)
    {
        if(i>=j)
            continue;
        if(arr[i]*2<=arr[j])
        {
            temp--;
            arr1[i]=1;
            arr1[j]=1;
            while(j>=0 && arr1[j]!=0)
                j--;
        }
    }
   // for(ll i=0;i<n;i++)
   //     cout<<arr[i]<<" ";
  //  cout<<endl;
    cout<<temp;
}
