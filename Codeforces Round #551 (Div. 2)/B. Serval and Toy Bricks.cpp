#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    ll n,m,h;
    cin>>n>>m>>h;
    vector<vector<ll> >arr(n,vector<ll>(m,INT_MAX));
    for(ll i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        for(ll j=0;j<n;j++)
        {
            if(arr[j][i]!=0)
                arr[j][i]=a;
        }
    }
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        for(ll j=0;j<m;j++)
        {
            if(arr[i][j]!=0)
                arr[i][j]=min(a,arr[i][j]);
        }
    }
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
        {
            ll a;
            cin>>a;
            if(a==0)
                arr[i][j]=0;
        }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
