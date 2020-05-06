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
const ll rows = 1001;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    vector<vector<ll> >ncr(rows,vector<ll>(rows));
    for(ll i = 0; i <= 1000; i++)
    {
        //cout<<i<<":"<<" ";
        ncr[i][0] = ncr[i][i] = 1;
        for(ll j = 1; j < i; j++){
            ncr[i][j] = (ncr[i-1][j-1]%mod + ncr[i-1][j]%mod)%mod;
           // cout<<ncr[i][j]<<" ";
        }
       // cout<<endl;
    }
    ll ans = 1, cnt = 0;
    while(t--)
    {
        ll n;
        cin>>n;
        cnt += n;
        ans = (ans%mod * ncr[cnt-1][n-1]%mod)%mod;
    }
    cout<<ans;
    return 0;
}
