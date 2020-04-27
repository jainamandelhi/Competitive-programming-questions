#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
        string s;
        cin>>s;
        ll n = s.size();
        ll flag = 1;
        for(ll i = 0; i < n; i++)
        {
            if(s[i] != s[0])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            cout<<s<<endl;
            continue;
        }
        string ans = "";
        for(ll i = 0; i < 2*n; i++)
            ans.pb('1');
        for(ll i = 0; i < 2*n; i+=2)
            ans[i] = '0';
        cout<<ans<<endl;
    }
    return 0;
}
