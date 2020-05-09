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
        ll x = 0;
        ll y = 0;
        map<pair<pair<ll,ll>,pair<ll,ll> >,ll >m;
        string s;
        cin>>s;
        ll ans = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            ll tx = x;
            ll ty = y;
            if(s[i] == 'N')
                y++;
            if(s[i] == 'S')
                y--;
            if(s[i] == 'E')
                x++;
            if(s[i] =='W')
                x--;
            if(m.find(mp(mp(x,y),mp(tx,ty))) != m.end())
                ans++;
            else
                ans += 5;
            m[mp(mp(x,y),mp(tx,ty))]++;
            m[mp(mp(tx,ty),mp(x,y))]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
