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
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=c*b/d;
    if(x<a)
    {
        ll y=a*d-c*b;
        ll xt=d*a;
        ll i=2;
        while(i<=max(xt,y))
        {
            while(xt%i==0 && y%i==0)
            {
                xt/=i;
                y/=i;
            }
            i++;
        }
        cout<<y<<'/'<<xt;
        return 0;
    }
    x=a*d/c;
    if(x<b)
    {
        ll y=b*c-a*d;
        ll xt=c*b;
        ll i=2;
        while(i<=max(xt,y))
        {
            while(xt%i==0 && y%i==0)
            {
                xt/=i;
                y/=i;
            }
            i++;
        }
        cout<<y<<'/'<<xt;
        return 0;
    }
    else
    {
        cout<<"0/1";
    }
}
