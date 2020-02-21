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
    ll n,m;
    cin>>n>>m;
    ll s[150001]={0};
    //vector<ll>vis(150001);
    vector<vector<ll > >v(150001);
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    for(ll i=1;i<=n;i++)
    {
        if(s[i])
            continue;
        ed=0;
        //ll vis[150001]={0};
        ll p=1;
        f(i,v,s,p);
       // cout<<p<<" "<<ed<<endl;
        p=p*(p-1);
        p/=2;
        if(p!=ed/2)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
