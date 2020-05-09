/* Isn't passion overrated?*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll int
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        vector<ll>cnt(n+1);
        for(ll i = 0; i < n; i++)
        {
            ll temp = 0;
            for(ll j = i; j >= 0; j--)
            {
                temp += arr[j];
                if(temp > n)
                    break;
                if(j == i)
                    continue;
                cnt[temp]++;
            }
        }
        ll ans = 0;
        for(ll i = 0; i < n; i++)
        {
            if(cnt[arr[i]])
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
