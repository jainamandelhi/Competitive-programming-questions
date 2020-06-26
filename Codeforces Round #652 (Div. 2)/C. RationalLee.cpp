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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>arr(n);
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        vector<ll>space;
        ll j = n-1;
        ll ans = 0;
        for(ll i = 0; i < m; i++){
            ll a;
            cin>>a;
            if(a == 1)
            {
                ans += arr[j] + arr[j];
                j--;
            }
            else
                space.pb(a);
        }
        m = space.size();
        sort(space.rbegin(),space.rend());
       // for(ll i = 0; i < m; i++)
        //    cout<<space[i]<<" ";
        ll i = 0;
        for(ll k = 0; k < m; k++)
        {
            ll a = space[k];
            a--;
            ll maxi = arr[j];
            ll mini = arr[j];
            j--;
            while(a--)
            {
                mini = min(mini,arr[i]);
                i++;
            }
            ans += maxi+mini;
        }
        cout<<ans<<endl;
    }
    return 0;
}
