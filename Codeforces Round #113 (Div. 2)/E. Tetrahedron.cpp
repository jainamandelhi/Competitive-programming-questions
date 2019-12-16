#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
vector<vector<ll> > prod(vector<vector<ll> >arr,vector<vector<ll> >arr1)
{
    vector<vector<ll> >ans(4,vector<ll>(4,0));
    for(ll i=0;i<4;i++)
    {
        for(ll j=0;j<4;j++)
        {
            for(ll k=0;k<4;k++)
            {
                ans[i][j]=(ans[i][j]%mod+arr[i][k]%mod*arr1[k][j]%mod)%mod;
            }
        }
    }
    return ans;
}
vector<vector<ll> > power(vector<vector<ll> >arr,ll n)
{
    if(n==1)
        return arr;
    vector<vector<ll> >v;
    v=power(arr,n/2);
    v=prod(v,v);
    if(n%2)
        v=prod(v,arr);
    return v;
}
int main()
{
    ll n;
    cin>>n;
    vector<vector<ll> >arr(4,vector<ll>(4,0));
    for(ll i=0;i<4;i++)
        for(ll j=0;j<4;j++)
            if(i!=j)
                arr[i][j]=1;
    vector<vector<ll> >v=power(arr,n);
    cout<<v[0][0];
}
