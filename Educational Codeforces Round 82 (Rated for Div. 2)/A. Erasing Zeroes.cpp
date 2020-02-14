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
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll>arr;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
                arr.pb(i);
        }
        ll ans=0;
        for(ll i=1;i<arr.size();i++)
        {
            ans=ans+arr[i]-arr[i-1]-1;
        }
        cout<<ans<<endl;
    }
}
