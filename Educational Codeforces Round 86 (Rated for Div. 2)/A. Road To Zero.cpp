#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll ans = 0;
        if(2*a <= b)
        {
            ans += a*(x+y);
        }
        else
        {
            ll temp = min(x,y);
            ans += temp*b;
            x -= temp;
            y -= temp;
            temp = max(x,y);
            ans += temp*a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
