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
ll power(ll a,ll n,ll i)
{
    if(n == 0)
        return 1;
    ll res = power(a,n/2,i)%i;
    if(n%2)
        return res%i * res%i * a%i;
    else
        return res%i * res%i;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        ll ans = 1;
        cin>>a>>b>>n;
        if(a == b)
        {
            cout<<(power(a,n,mod) + power(b,n,mod))%mod;
            cout<<endl;
            continue;
        }
        ll num = a-b;
        for(ll i=1; i <= sqrt(num); i++)
        {
            if(num % i)
                continue;
            ll temp = (power(a,n,i) + power(b,n,i))%i;
            if(!temp)
                ans = max(ans,i);
            temp = (power(a,n,num/i) + power(b,n,num/i))%(num/i);
            if(!temp)
                ans = max(ans,num/i);
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}
