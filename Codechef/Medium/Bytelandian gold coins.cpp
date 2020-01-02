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
map<ll,ll>m;
ll func(ll a)
{
    if(a==0)
        return 0;
    if(m.find(a)!=m.end())
        return m[a];
    return m[a]=max(a,func(a/2)+func(a/3)+func(a/4));
}
int main()
{
    ll t;
    while(cin>>t)
    {
       cout<<func(t)<<endl;
    }
    return 0;
}
