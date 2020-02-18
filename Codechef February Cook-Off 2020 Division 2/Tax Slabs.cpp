#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
priority_queue<ll>q;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m=n;
        ll ans=0;
        if(n>1500000)
        {
            ll temp=n-1500000;
            n=1500000;
            temp/=100;
            ans=ans+30*temp;
        }
        if(n>=1250001)
        {
            ll temp=n-1250000;
            n=1250000;
            temp/=100;
            ans=ans+25*temp;
        }
        if(n>=1000001)
        {
            ll temp=n-1000000;
            n=1000000;
            temp/=100;
            ans=ans+20*temp;
        }
        if(n>=750001)
        {
            ll temp=n-750000;
            n=750000;
            temp/=100;
            ans=ans+15*temp;
        }
        if(n>=500001)
        {
            ll temp=n-500000;
            n=500000;
            temp/=100;
            ans=ans+10*temp;
        }
        if(n>=250001)
        {
            ll temp=n-250000;
            n=250000;
            temp/=100;
            ans=ans+5*temp;
        }
        cout<<m-ans<<endl;
    }
}
