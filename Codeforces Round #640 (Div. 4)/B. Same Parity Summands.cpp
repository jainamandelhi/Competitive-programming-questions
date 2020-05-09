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
        ll n,k;
        cin>>n>>k;
        ll m = n/k;
        vector<ll>ans;
        for(ll i = 0; i < k; i++)
            ans.pb(n/k);
        if(ans[0] == 0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%k)
        {
            if((k-1) % 2 || ans[0] < 2)
            {
                if((n%k)%2){
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        ans[0] += n%k;
        if((n % k) % 2)
        {
            ll flag = 1;
            for(ll i = 1; i < ans.size(); i++)
            {
                ans[i] += flag;
                flag = flag*(-1);
            }
        }
        cout<<"YES"<<endl;
        for(ll i = 0; i < ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
