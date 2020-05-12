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
        ll n;
        cin>>n;
        vector<ll>arr;
        arr.pb(-1);
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            arr.pb(a);
        }
        vector<ll>ans(n+1,1);
        ll maxi = 1;
        for(ll i = 2; i <= n; i++)
        {
            for(ll j = 1; j <= sqrt(i); j++)
            {
                if(i % j == 0){
                    if(arr[i] > arr[j])
                    ans[i] = max(ans[i],ans[j]+1);
                    if(j != 1 && arr[i] > arr[i/j])
                        ans[i] = max(ans[i],ans[i/j]+1);
                }
                maxi = max(maxi,ans[i]);
            }
            //cout<<ans[i]<<" ";
        }
        //cout<<endl;
        cout<<maxi<<endl;
    }
    return 0;
}
