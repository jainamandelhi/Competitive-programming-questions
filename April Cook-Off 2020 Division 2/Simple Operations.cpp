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
ll power(ll a,ll m)
{
    a %= mod;
    ll res = 1;
    while(m > 0)
    {
        if(m & 1)
            res = res*a%mod;
        a = a*a%mod;
        m >>= 1;
    }
    return res;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        vector<pair<ll,ll> >v;
        ll i = 0, j = 0;
        ll flag = 0;
        while(j < s1.size())
        {
            flag = 0;
            while(j < s1.size() && s1[j] != s2[j])
            {
                flag = 1;
                j++;
            }
            if(flag){
                v.pb(mp(i,j-1));
            }
            j++;
            i = j;
        }
        ll ans = 0;
        ll n = v.size();
        for(ll i = 0; i < n; i++)
            ans = ans + v[i].second-v[i].first+1;
        vector<ll>arr;
        for(ll i = 1; i < n ; i++)
        {
            arr.pb(v[i].first-v[i-1].second-1);
        }
        sort(arr.begin(),arr.end());
        ll out = ans*n;
        //cout<<n<<endl;
       // cout<<ans<<endl;
        for(ll i = 0; i < arr.size(); i++)
        {
            n--;
            ans += arr[i];
            out = min(out,ans*n);
        }
        cout<<out<<endl;
    }
    return 0;
}
