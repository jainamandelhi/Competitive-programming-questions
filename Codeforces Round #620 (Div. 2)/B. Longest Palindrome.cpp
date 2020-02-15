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
bool check(string s1,string s2)
{
    ll n=s1.size();
    ll i=0,j=n-1;
    while(i<n)
    {
        if(s1[i]!=s2[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    //cout<<-1;
    //ios_base:: sync_with_stdio(false);
	//cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    //cout<<35;
    cin>>n>>m;
    //cout<<46241242;

    vector<string>s;
    //cout<<43523;
    for(ll i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        s.pb(s1);
    }
    vector<pair<ll,ll> >v;
    ll v1=-1;
    //cout<<34253;
    for(ll i=0;i<n;i++)
    {
        if(check(s[i],s[i]))
        {
            v1=i;
            continue;
        }
        for(ll j=i+1;j<n;j++)
        {
            if(check(s[i],s[j]))
            {
                v.pb(mp(i,j));
            }
        }
    }
    vector<string>ans;
    //cout<<3432;
    ll i=0,j=v.size()-1;
    if(v.size()==0 && v1==-1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(v.size()==0)
    {
        cout<<m<<endl;
        cout<<s[v1];
        return 0;
    }
    while(i<=j)
    {
        ans.pb(s[v[i].first]);
        i++;
    }
   // cout<<4565;
    while(j>=0)
    {
        ans.pb(s[v[j].second]);
        j--;
    }
    ll k=ans.size();
    if(v1!=-1)
        k++;
    cout<<k*m<<endl;
    for(ll i=0;i<ans.size();i++)
    {
        if(i==ans.size()/2 && v1!=-1)
        {
            cout<<s[v1];
        }
        cout<<ans[i];
    }
}
