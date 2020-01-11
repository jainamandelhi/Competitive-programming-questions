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
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%3)
    {
        cout<<0;
        return 0;
    }
    vector<ll>arr1(n);
    ll sum1=0;
    ll t=0;
    for(ll i=0;i<n;i++)
    {
        sum1+=arr[i];
        if(sum1==sum/3)
            arr1[i]++;
    }
    sum1=0;
    vector<ll>arr2(n);
    for(ll i=n-1;i>=0;i--)
    {
        sum1+=arr[i];
        if(sum1==sum/3)
            arr2[i]++;
    }
    sum1=0;
    for(ll i=1;i<n;i++){
        arr1[i]+=arr1[i-1];
    }
    sum1=0;
    /*for(ll i=n-1;i>=0;i--)
    {
        sum1+=arr2[i];
        if(arr2[i]!=0)
            arr2[i]=sum1;
    }*/
    ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        if(i+2>=n)
            break;
        maxi=maxi+arr1[i]*arr2[i+2];
    }
    cout<<maxi;
}
