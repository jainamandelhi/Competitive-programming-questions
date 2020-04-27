#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000000000000007
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
        vector<ll>ans(n,1);
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < i-1; j++)
            {
                if(arr[i] == arr[j])
                {
                    ans[i] = max(ans[i],ans[j]+1);
                }
            }
        }
        ll maxi = 0,index = arr[0];
        for(ll i = 0; i < n; i++)
            index = min(index,arr[i]);
        for(ll i = 0; i < ans.size(); i++)
        {
            if(ans[i] == maxi)
                index = min(index,arr[i]);
            if(ans[i] > maxi)
            {
                maxi = ans[i];
                index = arr[i];
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
