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
        ll n;
        cin>>n;
        ll ans = 0;
        while(1)
        {
            ll a = 24 * n;
            a++;
            a = sqrt(a);
            a--;
            a /= 6;
            if(a == 0)
                break;
            n = n - ((3*a + 1)*a)/2;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
