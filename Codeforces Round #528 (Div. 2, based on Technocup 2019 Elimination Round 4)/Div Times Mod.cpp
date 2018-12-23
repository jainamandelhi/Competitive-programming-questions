#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=k-1;i>0;i--)
    {
        if(n%i==0)
        {
            ll ans=(n/i)*k;
            ans+=i;
            cout<<ans;
            return 0;
        }
    }
    return 0;
}
