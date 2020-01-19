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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll ans=0;
        ll p=a;
        ll q=b+a;
        ll r=a+b+c;
        if(n>=r)
            ans=1;
        else if(n>=q)
            ans=2;
        else if(n>=b+c)
            ans=2;
        else if(n>=c)
            ans=3;
        p=c;
        q=b+c;
        r=a+b+c;
        ll ans1;
        if(n>=r)
            ans1=1;
        else if(n>=q)
            ans1=2;
        else if(n>=b+a)
            ans1=2;
        else if(n>=a)
            ans1=3;
        cout<<max(ans,ans1)<<endl;
    }
}
