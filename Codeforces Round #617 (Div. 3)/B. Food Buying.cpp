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
        ll ans=0;
        while(n)
        {
            ans=ans+n/10*10;
            if(n==n%10)
            {
                ans+=n;
                break;
            }
            n=n/10+n%10;
        }
        cout<<ans<<endl;
    }
}
