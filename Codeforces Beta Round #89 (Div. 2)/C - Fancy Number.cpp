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
vector<vector<pair<ll,ll> > >v;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    v = vector<vector<pair<ll,ll> > >(n,vector<pair<ll,ll> >(10));
    vector<pair<ll,string> >ans;
    for(ll i = 0; i <= 9; i++)
    {
        ll cost = 0;
        ll f = 0;
        string s1 = s;
        for(ll j = 0; j < n; j++)
        {
            if(s1[j]-'0' == i)
                f++;
        }
        ll fi = i+1, se = i-1;
        while(fi <= 9 || se >= 0)
        {
            for(ll j = 0; j < n; j++)
            {
                if(fi > 9)
                    break;
                if(f >= k)
                    break;
                if(s1[j]-'0' == fi)
                {
                    cost += abs((s1[j]-'0') - i);
                    s1[j] = i+'0';
                    f++;
                }
            }
            if( f>= k)
                break;
            for(ll j = n-1; j >= 0; j--)
            {
                if(se < 0)
                    break;
                if(f >= k)
                    break;
                if(s1[j]-'0' == se)
                {
                    cost += abs((s1[j]-'0') - i);
                    s1[j] = i+'0';
                    f++;
                }
            }
            if( f>= k)
                break;
            fi++;
            se--;
        }
        ans.pb(mp(cost,s1));
    }
        //cout<<cost<<endl;
    sort(ans.begin(),ans.end());
    /*for(ll i = 0; i < ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }*/
    cout<<ans[0].first<<endl;
    cout<<ans[0].second;
    return 0;
}
