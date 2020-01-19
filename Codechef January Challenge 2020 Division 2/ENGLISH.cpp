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
ll calpre(string s1,string s2)
{
    ll n=s1.size();
    ll m=s2.size();
    ll i=0,j=0;
    ll cnt=0;
    while(i<n && j<m && s1[i++]==s2[j++])
        cnt++;
    return cnt;
}
ll calsuf(string s1,string s2)
{
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    ll n=s1.size();
    ll m=s2.size();
    ll i=0,j=0;
    ll cnt=0;
    while(i<n && j<m && s1[i++]==s2[j++])
        cnt++;
    return cnt;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    unordered_map<string,ll>m;
    unordered_map<string,ll> :: iterator itr;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    ll ans=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second>1)
        {
            string temp=itr->first;
            ans=ans+pow(temp.size(),2)*(itr->second/2);
            itr->second=itr->second-itr->second/2*2;
        }
    }
    vector<string>v;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second)
            v.pb(itr->first);
    }
    vector<tuple<ll,string,string> >tup;
    for(ll i=0;i<v.size();i++)
    {
        for(ll j=i+1;j<v.size();j++)
        {
            ll t1=min(calpre(v[i],v[j]),calsuf(v[i],v[j]));
            t1=t1*t1;
            tup.pb(make_tuple(t1,v[i],v[j]));
        }
    }
    sort(tup.rbegin(),tup.rend());
    map<string,ll>arr;
    for(ll i=0;i<tup.size();i++)
    {
        string s1=get<1>(tup[i]);
        string s2=get<2>(tup[i]);
        if(arr[s1]==0 && arr[s2]==0)
        {
            ans+=get<0>(tup[i]);
            arr[s1]++;
            arr[s2]++;
        }
    }
    cout<<ans<<endl;
    }
}
