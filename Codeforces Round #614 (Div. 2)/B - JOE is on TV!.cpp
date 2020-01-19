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
    ll n;
    cin>>n;
    double ans=0;
    while(n>1)
    {
        double k=(1*1.0)/n;
        ans=ans+k;
        n--;
    }
    ans++;
    cout<<setprecision(9)<<ans;
}
