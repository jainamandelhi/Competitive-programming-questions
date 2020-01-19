#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll mod=1000000007;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<ll> >fact(10);
    fact[2].pb(2);
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0' || s[i]=='1')
            continue;
        if(s[i]=='4')
        {
            ans.pb(3);
            ans.pb(2);
            ans.pb(2);
            continue;
        }
        if(s[i]=='6')
        {
            ans.pb(5);
            ans.pb(3);
            continue;
        }
        if(s[i]=='8')
        {
            ans.pb(7);
            ans.pb(2);
            ans.pb(2);
            ans.pb(2);
            continue;
        }
        if(s[i]=='9')
        {
            ans.pb(7);
            ans.pb(3);
            ans.pb(3);
            ans.pb(2);
            continue;
        }
        ans.pb(s[i]-'0');
    }
    sort(ans.rbegin(),ans.rend());
    for(ll i=0;i<ans.size();i++)
        cout<<ans[i];
}
