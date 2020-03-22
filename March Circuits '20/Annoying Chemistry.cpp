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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll x,y,p,q;
    cin>>x>>y>>p>>q;
    ll a = min(p,x);
    for(ll i=a;i>=2;i--)
    {
        if(i==1)
            break;
        while(p%i == 0 && x%i == 0)
        {
            p/=i;
            x/=i;
           // cout<<p<<" "<<x<<endl;
        }
        if(p == 1 || x == 1)
            break;
    }
    a = min(q,y);
    //cout<<q<<" "<<y<<endl;
    for(ll i=a;i>=2;i--)
    {
        //cout<<q<<" "<<y<<endl;
        if(i==1)
            break;
       // cout<<q<<" "<<y<<endl;
        while(q%i == 0 && y%i == 0)
        {
            q/=i;
            y/=i;
           // cout<<q<<" "<<y<<endl;
        }
        if(q == 1 || y == 1)
            break;
    }
    a = gcd(x,y);
    a = (x*y)/a;
    cout<<(p*a)/x<<" "<<(q*a)/y<<" "<<a;
}
