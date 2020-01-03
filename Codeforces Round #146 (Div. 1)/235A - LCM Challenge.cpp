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
    ll n;
    cin>>n;
    ll i=n;
    ll a=1;
    for(i=n-1;i>=1;i--)
    {
        if(gcd(n,i)==1)
        {
            a=i;
            break;
        }
    }
    i--;
    ll b=1;
    while(i>=1)
    {
        if(gcd(n,i)==1 && gcd(a,i)==1)
        {
            b=i;
            break;
        }
        i--;
    }
    ll maxi=n*a*b;
    a=1;
    b=1;
    for(i=n-2;i>=1;i--)
    {
        if(gcd(n-1,i)==1)
        {
            a=i;
            break;
        }
    }
    i--;
    while(i>=1)
    {
        if(gcd(n-1,i)==1 && gcd(a,i)==1)
        {
            b=i;
            break;
        }
        i--;
    }
    cout<<max(maxi,(n-1)*a*b);
}
