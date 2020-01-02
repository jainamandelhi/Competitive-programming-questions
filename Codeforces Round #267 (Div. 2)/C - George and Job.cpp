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
    ll n,m,k;
    cin>>n>>m>>k;
    //memset(dp,-1,sizeof(dp));
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll temp=0;
    ll sum=0;
    vector<ll>arr1(n);
    for(ll i=0;i<n;i++)
    {
        if(temp<m)
        {
            sum+=arr[i];
            temp++;
        }
        else
        {
            arr1[i-1]=sum;
            sum-=arr[i-m];
            sum+=arr[i];
        }
    }
    arr1[n-1]=sum;
   // for(ll i=0;i<n;i++)
  //      cout<<arr1[i]<<" ";
   // cout<<endl;
    vector<vector<ll> >dp(n,vector<ll>(k+1));
    dp[m-1][1]=arr1[m-1];
    for(ll i=m-1;i<n;i++)
    {
        for(ll j=1;j<=k;j++)
        {
            if(i-m>=0)
                dp[i][j]=max(dp[i-1][j],dp[i-m][j-1]+arr1[i]);
        }
    }
  /*  for(ll i=0;i<n;i++)
    {
        for(ll j=1;j<=k;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<dp[n-1][k];
}
