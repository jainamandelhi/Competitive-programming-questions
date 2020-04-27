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
        ll n,k;
        cin>>n>>k;
        ll temp = 0;
        if(n > 0){
        temp = n-1;
        temp = temp%mod*(temp+1)%mod;
        temp %= mod;
        }
        ll ans = temp;
        temp = n*2;
        k--;
        ans += n;
        if(k == 0)
        {
            cout<<ans%mod<<endl;
            continue;
        }
        if(k % 2)
        {
            ans += 2*n;
            ans %= mod;
        }
        if(n)
            k /= 2;
        temp += 2;
        temp += k - 1;
        temp %= mod;
        temp = temp * k;
        temp %= mod;
        ans += temp;
        ans %= mod;
        cout<<ans<<endl;
    }
    return 0;
}
