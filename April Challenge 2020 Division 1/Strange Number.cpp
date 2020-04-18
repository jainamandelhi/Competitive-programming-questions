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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll cnt = 1;
        ll i = 2;
        while(cnt<m && i<=sqrt(n))
        {
            if(n%i == 0)
            {
                n /= i;
                cnt++;
            }
            else
            {
                i++;
            }
        }
        if(cnt == m && n != 1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
