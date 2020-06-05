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
        ll n,m;
        cin>>n>>m;
        vector<string>s;
        for(ll i = 0; i < n; i++)
        {
            string s1;
            cin>>s1;
            s.pb(s1);
        }
        ll flag = 0;
        string ans = s[0];
        for(ll i = 0; i < m; i++)
        {
            char tep = ans[i];
            for(char c = 'a'; c <= 'z'; c++)
            {
                ans[i] = c;
                for(ll j = 0; j < n; j++)
                {
                    ll cnt = 0;
                    for(ll k = 0; k < m; k++)
                        cnt += (ans[k] != s[j][k]);
                    //cout<<ans<<" "<<cnt<<endl;
                    flag = 0;
                    if(cnt > 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                //cout<<endl;
                if(!flag)
                {
                    cout<<ans<<endl;
                    break;
                }
            }
            if(!flag)
                break;
            ans[i] = tep;
        }
        if(flag)
            cout<<-1<<endl;
    }
    return 0;
}
