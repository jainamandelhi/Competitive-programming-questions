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
        ll n,m,x;
        cin>>n>>m>>x;
        ll ans;
        if(x >= m || x >= n)
            ans = min(n,m);
        else
        {
            m -= x;
            n -= x;
            if(max(m,n) >= 2*min(m,n))
                ans = min(m,n);
            else
                ans = (n+m)/3;
            ans += x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
