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
    string s;
    cin>>s;
    vector<ll>r(n),b(n),g(n);
    for(ll i = n-1; i >= 0; i--)
    {
        if(s[i] == 'R')
            r[i]++;
        if(s[i]=='B')
            b[i]++;
        if(s[i]=='G')
            g[i]++;
        if(i != n-1)
        {
            r[i] += r[i+1];
            g[i] += g[i+1];
            b[i] += b[i+1];
        }
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++)
    {
        for(ll j = i+1; j < n; j++)
        {
            if(s[i] == 'R')
            {
                if(s[j] == 'G' && j+1 < n)
                {
                    ans += b[j+1];
                    if(2*j-i < n && s[2*j-i] == 'B')
                        ans--;
                }
                if(s[j] == 'B' && j+1 < n)
                {
                    ans += g[j+1];
                    if(2*j-i < n && s[2*j-i] == 'G')
                        ans--;
                }
                continue;
            }
            if(s[i] == 'G')
            {
                if(s[j] == 'R' && j+1 < n)
                {
                    ans += b[j+1];
                    if(2*j-i < n && s[2*j-i] == 'B')
                        ans--;
                }
                if(s[j] == 'B' && j+1 < n)
                {
                    ans += r[j+1];
                    if(2*j-i < n && s[2*j-i] == 'R')
                        ans--;
                }
                continue;
            }
            if(s[i] == 'B')
            {
                if(s[j] == 'G' && j+1 < n)
                {
                    ans += r[j+1];
                    if(2*j-i < n && s[2*j-i] == 'R')
                        ans--;
                }
                if(s[j] == 'R' && j+1 < n)
                {
                    ans += g[j+1];
                    if(2*j-i < n && s[2*j-i] == 'G')
                        ans--;
                }
                continue;
            }
        }
    }
    cout<<ans;
}
