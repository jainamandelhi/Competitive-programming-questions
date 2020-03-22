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
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll flag = 0;
        ll ans = 1;
        for(ll i=1;i<n;i++)
        {
            ll a = arr[i-1];
            ll b = arr[i];
            ll cnt = 0;
            while(b)
            {
                if((a%2==1) && (b%2==0))
                {
                    flag = 1;
                    break;
                }
                if(a%2 == 0)
                {
                    a/=2;
                    b/=2;
                    continue;
                }
                cnt++;
                a/=2;
                b/=2;
            }
            if(flag)
            {
                ans = 0;
                break;
            }
            a = 1<<cnt;
            ans = (ans%mod*a%mod)%mod;
            ans %= mod;
        }
        cout<<ans%mod<<endl;
    }
}
