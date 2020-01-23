#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    ll n,t;
    cin>>n>>t;
    ll mini=INT_MAX,ans;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        while(a<t)
            a+=b;
        if(a<mini)
        {
            mini=a;
            ans=i+1;
        }
    }
    cout<<ans;

    return 0;
}
