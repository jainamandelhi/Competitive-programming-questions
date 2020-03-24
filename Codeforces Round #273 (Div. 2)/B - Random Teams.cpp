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
    ll a = n-m+1;
    a = a*(a-1);
    a /= 2;
    ll b = n/m;
    ll c = n%m;
    ll d = m-c;
    ll e = c*(b*(b+1))/2 + d*(b*(b-1))/2;
    cout<<e<<" "<<a;
}
