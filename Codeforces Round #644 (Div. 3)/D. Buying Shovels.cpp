/* Isn't passion overrated?*/

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
        ll ans = 1;
        ll m = sqrt(n);
        for(ll i = min(m,k); i >= 1; i--)
        {
            if(n % i == 0)
            {
                ans = max(i, ans);
                if(n/i <= k)
                    ans = max(ans, n/i);
            }
        }
        cout<<n/ans<<endl;
    }
    return 0;
}
