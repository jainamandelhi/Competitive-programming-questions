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
    if(n == 2)
    {
        cout<<1;
        return 0;
    }
    if(n == 1)
    {
        cout<<1;
        return 0;
    }
    ll ans = 2;
    set<ll>s;
    s.insert(n);
    s.insert(n-1);
    //cout<<sqrt(n)<<endl;
    for(ll i=2;i<=sqrt(n);i++)
    {
        ll m = n;
        while(m%i == 0)
            m /= i;
        if((m == 1) || ((m-1)%i == 0))
        {
            //out<<i<<endl;
            if(s.find(i) == s.end())
                ans++;
            s.insert(i);
        }
        ll j=n/i;
        m = n;
        while(m%j == 0)
            m /= j;
        if((m == 1) || ((m-1)%j == 0))
        {
           // cout<<j<<endl;
           if(s.find(j) == s.end())
                ans++;
            s.insert(j);
        }
    }
    cout<<ans;
}
