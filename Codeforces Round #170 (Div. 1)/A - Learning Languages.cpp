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
    ll n,m;
    cin>>n>>m;
    map<ll,set<ll> >ma;
    set<ll>::iterator itr;
    vector<vector<ll> >v(n);
    ll flag1=0;
    for(ll i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        for(ll j=0;j<k;j++)
        {
            flag1=1;
            ll a;
            cin>>a;
            v[i].pb(a);
            ma[a].insert(i);
        }
    }
    ll ans=0;
    set<ll>f;
    while(1)
    {
        queue<ll>q;
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            if(f.find(i)==f.end())
            {
                q.push(i);
                ans++;
                break;
            }
            if(i==n-1)
                flag=1;
        }
        if(flag)
            break;
        while(!q.empty())
        {
            ll fi=q.front();
            f.insert(fi);
            q.pop();
            for(ll i=0;i<v[fi].size();i++)
            {
                ll j=v[fi][i];
                for(itr=ma[j].begin();itr!=ma[j].end();itr++)
                {
                    if(f.find(*itr)==f.end())
                    {
                        q.push(*itr);
                        f.insert(*itr);
                    }
                }
            }
        }
    }
    if(!flag1)
        ans++;
    cout<<ans-1;
}
