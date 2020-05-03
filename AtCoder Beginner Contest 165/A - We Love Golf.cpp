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
    ll k;
    ll a,b;
    cin>>k>>a>>b;
    ll m = b%k;
    b -= m;
    if( b >= a)
        cout<<"OK";
    else
        cout<<"NG";
    return 0;
}
