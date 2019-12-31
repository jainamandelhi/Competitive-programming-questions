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
    ll a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0;
        return 0;
    }
    ll ans=0;
    ll c=gcd(a,b);
    ll d=a/c,e=b/c;
   // cout<<d<<" "<<e<<endl;
    ll dt=d,et=e;
    while(dt%5==0)
        dt/=5;
    while(dt%3==0)
        dt/=3;
    while(dt%2==0)
        dt/=2;
    while(et%5==0)
        et/=5;
    while(et%3==0)
        et/=3;
    while(et%2==0)
        et/=2;
    if(dt!=1 || et!=1)
    {
        cout<<-1;
        return 0;
    }
            while(d && d%5==0){
            ans++;
            d/=5;
            }
            while(e && e%5==0){
            ans++;
            e/=5;
            }
            while(d && d%3==0){
            ans++;
            d/=3;
            }
            while(e && e%3==0){
            ans++;
            e/=3;
            }
            while(d && d%2==0){
            ans++;
            d/=2;
            }
            while(e && e%2==0){
            ans++;
            e/=2;
            }
    cout<<ans;
}
