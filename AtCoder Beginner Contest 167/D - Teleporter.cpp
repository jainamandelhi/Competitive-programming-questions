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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll arr[n+1];
    for(ll i = 1; i <= n; i++)
        cin>>arr[i];
    ll ans = 1;
    map<ll,ll>k;
    k[1] = 0;
    ll cnt = 0;
    while(m--)
    {
        cnt++;
        ans = arr[ans];
        if(k.find(ans) != k.end())
        {
            ll temp = m;
            temp = m%(cnt-k[ans]);
            while(temp--)
                ans = arr[ans];
            break;
        }
        k[ans] = cnt;
    }
    cout<<ans;
    return 0;
}
