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
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll>z(n+1);
    map<ll,ll>m;
    vector<ll>cnt(n+1);
    ll l = 0,r = 0;
    for(ll i=1;i<n;i++)
    {
        if(i > r)
        {
            l = r = i;
            while(r < n && s[r-l] == s[r])
                r++;
            z[i] = r-l;
            r--;
        }
        else
        {
            ll k = i-l;
            if(z[k] <= r-i)
                z[i] = z[k];
            else
            {
                l = i;
                while(r < n && s[r-l] == s[r])
                    r++;
                z[i] = r-l;
                r--;
            }
        }
        if(z[i] + i == n)
            m[z[i]]++;
        cnt[z[i]]++;
    }
    for(ll i=n-1;i>=0;i--)
        cnt[i] += cnt[i+1];
    map<ll,ll>::iterator itr;
    cout<<m.size()+1<<endl;
    for(itr = m.begin();itr != m.end();itr++)
    {
        cout<<itr->first<<" "<<cnt[itr->first]+1<<endl;
    }
    cout<<s.size()<<" "<<1;
}
