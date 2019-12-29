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
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k1,k2;
        cin>>n>>k1>>k2;
        ll a=0,b=0;
        for(ll i=0;i<k1;i++)
        {
            ll p;
            cin>>p;
            a=max(a,p);
        }
        for(ll i=0;i<k2;i++)
        {
            ll p;
            cin>>p;
            b=max(b,p);
        }
        if(a>b)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
