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
        vector<vector<ll> >ans;
        for(ll i = 0; i < n; i++)
        {
            vector<ll>temp;
            if(s[i] == '0')
                continue;
            temp.pb(s[i]-'0');
            for(ll j = 0; j < n-i-1; j++)
                temp.pb(0);
            ans.pb(temp);
        }
        cout<<ans.size()<<endl;
        for(ll i = 0; i <ans.size(); i++)
        {
            for(ll j = 0; j < ans[i].size(); j++)
                cout<<ans[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
