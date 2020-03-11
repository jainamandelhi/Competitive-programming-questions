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
    ll n;
    cin>>n;
    map<string,ll>m;
    vector<pair<string,ll> >vec;
    for(ll i=0;i<n;i++)
    {
        string s;
        ll a;
        cin>>s>>a;
        vec.pb(mp(s,a));
        m[s]+=a;
    }
    map<string,ll>::iterator itr;
    ll maxi=INT_MIN;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second>maxi)
            maxi=itr->second;
    }
    set<string>s;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second==maxi)
            s.insert(itr->first);
    }
    string ans;
    map<string,ll>m1;
    for(ll i=0;i<n;i++)
    {
        m1[vec[i].first]+=vec[i].second;
        if(m1[vec[i].first]>=maxi && s.find(vec[i].first)!=s.end())
        {
            ans=vec[i].first;
            break;
        }
    }
    cout<<ans;
}
