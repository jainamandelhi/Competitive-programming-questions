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
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<pair<ll,ll> >arr1(n);
    vector<pair<ll,ll> >arr2(n);
    ll sum=0;
    ll i=0,j=0;
    while(j<n)
    {
        if(j-i<k-1)
        {
            sum+=arr[j];
            j++;
        }
        else
        {
            sum+=arr[j];
            if((j>0 && sum>arr1[j-1].first) || j==0)
            {
                arr1[j]=(mp(sum,j));
            }
            else if(j>0)
            {
                arr1[j]=(mp(arr1[j-1].first,arr1[j-1].second));
            }
            //arr1[j]=max(arr1[j-1],sum);
            sum-=arr[i];
            i++;
            j++;
            //sum+=arr[j];
        }
    }
    sum=0;
    i=n-1;
    j=n-1;
    while(i>=0)
    {
        if(j-i<k-1)
        {
            sum+=arr[i];
            i--;
        }
        else
        {
            sum+=arr[i];
            if((i<n-1 && sum>=arr2[i+1].first) || i==n-1)
            {
                arr2[i]=(mp(sum,i));
            }
            else if(i<n-1)
            {
                arr2[i]=(mp(arr2[i+1].first,arr2[i+1].second));
            }
            //arr2[i]=max(sum,arr2[i+1]);
            sum-=arr[j];
            j--;
            i--;
           // sum+=arr[i];
        }
    }
    i=0,j=0;
    sum=0;
    for(ll t=0;t<n-1;t++)
    {
        if(arr1[t].first==0 || arr2[t].first==0)
            continue;
        if(arr1[t].first+arr2[t+1].first>sum)
        {
            sum=arr1[t].first+arr2[t+1].first;
            i=arr1[t].second;
            j=arr2[t+1].second;
        }
    }
    cout<<i-k+2<<" "<<j+1;
}
