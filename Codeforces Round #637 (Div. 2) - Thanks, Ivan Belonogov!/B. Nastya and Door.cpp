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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        vector<ll>s;
        for(ll i = 1; i < n-1; i++)
        {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
                s.pb(i+1);
        }
        ll ans = 0;
        ll index;
        for(ll i = 0; i < n; i++)
        {
            if(i+k-1 >= n)
                break;
            ll j = i+1;
            vector<ll>::iterator itr1 = lower_bound(s.begin(),s.end(),j+k-1);
            vector<ll>::iterator itr2 = upper_bound(s.begin(),s.end(),i+1);
            if(itr2 == s.end())
                break;
            ll temp = itr1 - s.begin();
            temp = temp-(itr2-s.begin());
            if(temp > ans)
            {
                ans = temp;
                index = i+1;
            }
        }
        if(ans == 0)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        cout<<ans+1<<" "<<index<<endl;
    }
    return 0;
}
