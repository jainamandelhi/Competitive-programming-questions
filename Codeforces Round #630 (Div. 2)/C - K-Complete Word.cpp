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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,ll>m;
        ll ans = 0;
        set<ll>se;
        for(ll i=0;i<k;i++)
        {
            m.clear();
            ll maxi = 1;
            ll j = k;
            m[s[i]]++;
            ll cnt = 1;
            while(j-i-1 < n)
            {
                if(j-i-1 >= 0 && se.find(j-i-1) == se.end())
                {
                    m[s[j-i-1]]++;
                    cnt++;
                    maxi = max(maxi,m[s[j-i-1]]);
                }
                if(j+i < n && se.find(j+i) == se.end())
                {
                    m[s[j+i]]++;
                    cnt++;
                    maxi = max(maxi,m[s[j+i]]);
                }
                j += k;
            }
            ans += cnt - maxi;
        }
        if(k%2)
            ans++;
        cout<<ans/2<<endl;
    }
    return 0;
}
