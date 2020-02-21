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

ll ed=0;
void f(ll a, vector<vector<ll> >&v,ll s[],ll &u)
{
    s[a]=1;
    for(ll i=0;i<v[a].size();i++)
    {
        if(s[v[a][i]]==1)
        {
           //if(v[a][i]!=b)
                ed++;
            continue;
        }
        ed++;
        u++;
        f(v[a][i],v,s,u);
        //vis[a]=0;
    }
    //vis[a]=0;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>p;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            p.pb(i);
            p.pb(n/i);
        }
    }
    if(p.size()==0)
    {
        cout<<n;
        return 0;
    }
    sort(p.begin(),p.end());
    ll a=p[0];
    for(ll i=0;i<p.size();i++)
    {
        if(p[i]%a!=0)
        {
            cout<<1;
            return 0;
        }
    }
    cout<<a;
}
