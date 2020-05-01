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
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt1 = 0, cnt2 = 0;
        ll m = n/2;
        if(n == 2)
        {
            cout<<2<<endl;
            continue;
        }
        m = n/2;
        cnt1 += (1 << n);
        m--;
        ll j = 2;
        while(m--)
        {
            cnt1 += j;
            j *= 2;
        }
        m = n/2;
        cnt2=0;
        while(m--)
        {
            cnt2 += j;
            j *=2;
        }
        cout<<abs(cnt1-cnt2)<<endl;
    }
    return 0;
}
