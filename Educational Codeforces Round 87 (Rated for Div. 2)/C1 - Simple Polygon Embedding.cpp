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
    double pi = 3.14159265358979323846;
    while(t--)
    {
        ll n;
        cin>>n;
        n *= 2;
        double angle = 360.0/n;
        angle = angle*pi;
        angle /= 180.0;
        angle /= 2;
        double ans = 0.5/tan(angle);
        ans *= 2;
        cout<<setprecision(8)<<fixed<<ans<<endl;
    }
    return 0;
}
