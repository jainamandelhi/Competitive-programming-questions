#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
    ll t;
    cin>>t;
    vector<ll>mini(1000001);
    vector<ll>maxi(1000001);
    ll ans=0;
    for(ll q=0;q<t;q++)
    {
        ll n;
        cin>>n;
        ll mini1=INT_MAX,maxi1=INT_MIN,flag=0;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            if(a>mini1)
                flag=1;
            mini1=min(mini1,a);
            maxi1=max(maxi1,a);
        }
        if(!flag)
        {
            mini[mini1]++;
            maxi[maxi1]++;
            continue;
        }
        ans++;
        //cout<<ans<<endl;
    }
    ans=t*ans+(t-ans)*ans;
    for(ll i=1;i<1000001;i++)
    {
        mini[i]+=mini[i-1];
        //maxi[i]+=maxi[i-1];
    }
   /* for(ll i=1;i<=9;i++)
    {
        cout<<mini[i]<<" ";
    }
    cout<<endl;
    for(ll i=1;i<=9;i++)
    {
        cout<<maxi[i]<<" ";
    }*/
    for(ll i=1;i<1000001;i++)
    {
        ans=ans+mini[i-1]*maxi[i];
    }
    cout<<ans;
}
