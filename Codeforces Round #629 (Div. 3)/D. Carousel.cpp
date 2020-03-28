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
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll flag = 0;
        vector<ll>ans(n);
        ans[0] = 1;
        ll maxi = 0;
        for(ll i = 1;i < n; i++)
        {
            if(arr[i] == arr[i-1])
                flag = 1;
            if(arr[i] == arr[i-1])
            {
                ans[i] = ans[i-1];
                maxi = max(maxi,ans[i]);
                continue;
            }
            if(ans[i-1] == 2)
                ans[i] = 1;
            else
                ans[i] = 2;
            maxi = max(maxi,ans[i]);
        }
        if(arr[0] != arr[n-1] && ans[0] == ans[n-1])
        {
            if(flag)
            {
                flag = 1;
                for(ll i=1;i<n;i++)
                {
                    if(arr[i] == arr[i-1] && flag)
                    {
                        flag = 0;
                        if(ans[i] == 2)
                            ans[i] = 1;
                        else
                            ans[i] = 2;
                        maxi = max(maxi,ans[i]);
                        continue;
                    }
                    if(arr[i] == arr[i-1])
                    {
                        ans[i] = ans[i-1];
                        maxi = max(maxi,ans[i]);
                        continue;
                    }
                    if(ans[i-1] == 2)
                        ans[i] = 1;
                    else
                        ans[i] = 2;
                    maxi = max(maxi,ans[i]);
                    continue;
                }
            }
            else
            {
                ans[n-1] = 3;
                maxi = 3;
            }
        }
        cout<<maxi<<endl;
        for(ll i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}
