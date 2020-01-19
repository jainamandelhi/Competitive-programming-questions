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
        ll a;
        cin>>a;
        ll b;
        cin>>b;
        ll temp=pow(10,a);
        cout<<temp*2+b<<endl;
       // cout.flush();
        ll c;
        cin>>c;
        cout<<temp-c<<endl;
       // cout.flush();
        ll d;
        cin>>d;
        cout<<temp-d<<endl;
       // cout.flush();
        ll e;
        cin>>e;
        if(e==-1)
            return 0;
        //fflush(stdout);
    }
}
