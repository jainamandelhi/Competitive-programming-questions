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
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            cin>>arr[i][j];
    ll arr1[100011];
    for(ll i=0;i<100011;i++)
        arr1[i]=-1;
    arr1[0]=0;
    arr1[1]=0;
    for(ll i=2;i<=sqrt(100011);i++)
    {
        if(arr1[i]==0)
            continue;
        ll j=2;
        while(i*j<=100010)
        {
            arr1[i*j]=0;
            j++;
        }
    }
    ll temp=100011;
    for(ll i=100010;i>=0;)
    {
        if(arr1[i]==-1)
        {
            temp=i;
            i--;
            continue;
        }
        if(arr1[i]==0)
        {
            arr1[i]=temp-i;
        }
        i--;
    }
   // for(ll i=0;i<=6;i++)
    //    cout<<arr1[i]<<" ";
   // cout<<endl;
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        ll sum=0;
        for(ll j=0;j<m;j++)
        {
            if(arr1[arr[i][j]]!=-1)
                sum+=arr1[arr[i][j]];
        }
        mini=min(mini,sum);
    }
    //cout<<arr1[100001]<<endl;
    for(ll i=0;i<m;i++)
    {
        ll sum=0;
        for(ll j=0;j<n;j++)
        {
            if(arr1[arr[j][i]]!=-1)
                sum+=arr1[arr[j][i]];
        }
        mini=min(mini,sum);
    }
    cout<<mini;
}
