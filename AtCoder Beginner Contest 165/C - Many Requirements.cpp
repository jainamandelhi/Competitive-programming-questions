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
ll n,m,k;
ll cost[50];
ll indj[50];
ll indi[50];
ll fin[50];
ll maxi = 0;
void check(vector<ll>&ans)
{
    ll cnt = 0;
    for(ll i = 0; i < k; i++)
    {
        if(ans[indj[i]-1] - ans[indi[i]-1] == fin[i])
            cnt += cost[i];
        //cout<<ans[i]<<" ";
    }
   // cout<<endl;
    maxi = max(maxi,cnt);
}
void f(ll i,ll curr,vector<ll>&ans)
{
    if(i == n)
    {
        check(ans);
        return;
    }
    for(ll j = curr; j <= m; j++)
    {
        ans.pb(j);
        f(i+1,j,ans);
        ans.pop_back();
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m>>k;
    for(ll i = 0; i < k; i++)
    {
        cin>>indi[i]>>indj[i]>>fin[i]>>cost[i];
    }
    vector<ll>ans;
    f(0ll,1ll,ans);
    cout<<maxi;
    return 0;
}
