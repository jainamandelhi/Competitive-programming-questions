#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
int main()
{
    ll n;
    cin>>n;
    vector<ll>arr;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        arr.pb(a);
    }
    ll maxi=0;
    ll i=0,j=0,locmin=arr[0],locmax=arr[0],indi=0,indj=0;
    while(j<n)
    {
        locmax=max(arr[i],arr[j]),locmin=min(arr[i],arr[j]);
        while(j<n && abs(locmax-locmin)<2)
        {
            j++;
            if(j==n)
                break;
            if(arr[j]>=locmax)
            {
                locmax=arr[j];
                indj=j;
            }
            if(arr[j]<=locmin)
            {
                locmin=arr[j];
                indi=j;
            }
        }
        //cout<<i<<" "<<j<<endl;
        maxi=max(maxi,j-i);
        if(j>=n)
            break;
        i=min(indi,indj);
        j=max(indi,indj);
        i++;
        cout<<i<<" "<<j<<endl;
    }
    cout<<maxi;
}
