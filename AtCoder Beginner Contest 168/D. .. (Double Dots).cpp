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
double pi = 3.14159265358979323846;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n,m;
	cin>>n>>m;
    vector<vector<ll> >arr(n+1);
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    queue<ll>q;
    q.push(1);
    vector<ll>vis(n+1);
    vector<ll>ans(n+1);
    vis[1] = 1;
    while(!q.empty())
    {
        ll a = q.front();
        q.pop();
        for(ll i = 0; i < arr[a].size(); i++)
        {
            if(vis[arr[a][i]])
                continue;
            vis[arr[a][i]] = 1;
            ans[arr[a][i]] = a;
            //cout<<arr[a][i]<<" "<<a<<endl;
            q.push(arr[a][i]);
        }
    }
    for(ll i = 2; i <= n; i++)
    {
        if(ans[i] == 0)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    for(ll i = 2; i <= n; i++)
        cout<<ans[i]<<endl;
    return 0;
}
