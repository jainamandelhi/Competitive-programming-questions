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
    double k;
    cin>>k;
    ll cnt = 0;
    double s = 100;
    while(s < k)
    {
        cnt++;
        s = s*1.01;
        ll s1 = s;
        s = s1;
    }
    cout<<cnt;
    return 0;
}
