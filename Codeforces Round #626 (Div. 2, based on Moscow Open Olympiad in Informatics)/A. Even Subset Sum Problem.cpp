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
        vector<ll>ans;
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<1<<endl;
                cout<<i+1<<endl;
                flag=1;
                break;
            }
            else
                ans.pb(i+1);
        }
        if(flag)
            continue;
        if(ans.size()<2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<ans[0]<<" "<<ans[1]<<endl;
        }
    }
}
