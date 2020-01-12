#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
#define ll long long
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a=(n*(k-1))/k;
    for(ll i=a;;i++)
    {
        ll ans=i;
        for(ll j=1;;j++)
        {
            if(ans>=n)
            {
                cout<<i;
                return 0;
            }
            if(i/pow(k,j)==0)
                break;
            ans+=i/pow(k,j);
        }
    }
}
