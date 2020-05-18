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
        string s;
        cin>>s;
        ll n = s.size();
        map<char,ll>m;
        ll ans = INT_MAX;
        ll i = 0, j = 0;
        while(j < n)
        {
            m[s[j]]++;
            if(m.size() == 3)
            {
                ans = min(ans,j-i+1);
                while(1)
                {
                    m[s[i]]--;
                    ans = min(ans,j-i+1);
                    if(m[s[i]] == 0)
                    {
                        m.erase(s[i]);
                        i++;
                        break;
                    }
                    i++;
                }
            }
            j++;
        }
        if(ans == INT_MAX)
            ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}
