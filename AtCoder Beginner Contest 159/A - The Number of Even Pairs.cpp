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
    ll n,m;
    cin>>n>>m;
    ll ans = 0;
    if(n)
    ans = ans+(n*(n-1))/2;
    if(m)
    ans = ans+(m*(m-1))/2;
    cout<<ans;
}
