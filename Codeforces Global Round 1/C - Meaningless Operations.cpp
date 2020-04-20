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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll z = 0;
        ll m = n;
        ll cnt = 0;
        while(m)
        {
            cnt++;
            if(!(m%2))
                z++;
            m /= 2;
        }
       // cout<<z<<" "<<cnt<<endl;
        if(z != 0)
        {
            ll ans = 0;
            for(ll i = 0; i < cnt; i++)
            {
                ans = ans|(1<<i);
               // cout<<ans<<endl;
            }
            cout<<ans<<endl;
            continue;
        }
        ll flag = 1;
        for(ll i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                flag = 0;
                cout<<n/i<<endl;
                break;
            }
        }
        if(flag)
            cout<<1<<endl;
    }
}
