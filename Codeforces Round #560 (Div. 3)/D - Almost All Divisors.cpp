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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        set<ll>s;
        ll ans = 1;
        ll mini = 100000000000000;
        ll maxi = -2;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
            mini = min(mini,a);
            maxi = max(maxi,a);
        }
        ans = maxi*mini;
        ll flag = 0;
        for(ll i = 2; i <= sqrt(ans); i++)
        {
            if(ans % i == 0)
            {
                if(s.find(i) == s.end())
                {
                    flag = 1;
                    break;
                }
                if(s.find(ans/i) == s.end())
                {
                    flag = 1;
                    break;
                }
            }
        }
        set<ll>::iterator itr;
        for(itr = s.begin(); itr != s.end(); itr++)
        {
            if(ans%(*itr))
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout<<-1;
        else
            cout<<ans;
        cout<<endl;
    }
}
