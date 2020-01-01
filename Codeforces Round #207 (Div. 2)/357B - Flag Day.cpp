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
    ll n,m;
    cin>>n>>m;
   // vector<ll>arr(n+1);
    vector<vector<ll> >v(m);
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<3;j++)
        {
            ll a;
            cin>>a;
            v[i].pb(a);
           // arr[a]++;
        }
    }
    vector<ll>ans(n+1);
    for(ll i=0;i<m;i++)
    {
        ll flag1=1,flag2=1,flag3=1;
        for(ll j=0;j<3;j++)
        {
            if(ans[v[i][j]]==1)
                flag1=0;
            if(ans[v[i][j]]==2)
                flag2=0;
            if(ans[v[i][j]]==3)
                flag3=0;
        }
        for(ll j=0;j<3;j++)
        {
            if(ans[v[i][j]]!=0)
                continue;
            else if(flag1){
                ans[v[i][j]]=1;
                flag1=0;
            }
            else if(flag2){
                ans[v[i][j]]=2;
                flag2=0;
            }
            else if(flag3){
                ans[v[i][j]]=3;
                flag3=0;
            }
        }
    }
    for(ll i=1;i<=n;i++)
        cout<<ans[i]<<" ";
}
