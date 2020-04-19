#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
	if(n == 1)
    {
        cout<<-1;
        return 0;
    }
	cout<<n<<" "<<n+1<<" "<<n*(n+1);
}
