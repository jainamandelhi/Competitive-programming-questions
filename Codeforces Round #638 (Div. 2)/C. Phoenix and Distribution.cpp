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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        string ans = s.substr(k-1,1);
        //cout<<ans;
        if(k == n)
        {
            cout<<ans<<endl;
            continue;
        }
        if(s[k] != s[n-1])
        {
            if(s[0] != s[k-1])
            {
                cout<<ans<<endl;
                continue;
            }
            for(ll i = k; i < n; i++)
                ans.pb(s[i]);
            cout<<ans<<endl;
            continue;
        }
        if(s[0] != s[k-1])
        {
            cout<<ans<<endl;
            continue;
        }
        ll cnt = n-k;
        if(cnt%k)
            cnt = cnt/k +1;
        else
            cnt /= k;
        //cout<<cnt<<endl;
        cout<<ans;
        for(ll i = 0; i < cnt; i++)
            cout<<s[k];
        cout<<endl;
    }
    return 0;
}
