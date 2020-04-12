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
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        ll ans = 0;
        for(ll i = 1; i < n; i++)
        {
            if(arr[i] >= arr[i-1])
                continue;
            ll a = abs(arr[i]-arr[i-1]);
            ll ans1 = 0;
            while(a)
            {
                ans1++;
                a >>= 1;
            }
            ans = max(ans,ans1);
            arr[i] = arr[i-1];
        }
        cout<<ans<<endl;
    }
}
