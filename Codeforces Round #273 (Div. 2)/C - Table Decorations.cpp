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
map<string,vector<string> >m;
set<string>se;
int main()
{
    ll n;
    cin>>n;
    for(ll j = 0; j < n; j++)
    {
        string s1;
        cin>>s1;
        ll i = 0;
        while(s1[i] != '-')
            i++;
        string s2 = s1.substr(0,i);
        string s3 = s1.substr(i,n-i);
        m[s2].pb(s3);
        m[s3].pb(s2);
    }
    map<string,vector<string> > :: iterator itr;
    ll ans = 0;
    for(itr = m.begin(); itr != m.end(); itr++)
    {
        if(se.find(itr -> first) != se.end())
            continue;
        queue<string>q;
        q.push(itr->first);
        se.insert(itr->first);
        ll maxi = 0;
        while(!q.empty())
        {
            string s = q.front();
            q.pop();
            maxi++;
            for(ll i = 0; i < m[s].size(); i++)
            {
                if(se.find(m[s][i]) != se.end())
                    continue;
                q.push(m[s][i]);
                se.insert(m[s][i]);
            }
        }
        ans = max(ans,maxi);
    }
    cout<<ans;
}
