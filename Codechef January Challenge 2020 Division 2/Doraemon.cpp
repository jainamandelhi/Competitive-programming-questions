#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
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
        ll arr[n][m];
        for(ll i=0;i<n;i++)
            for(ll j=0;j<m;j++)
                cin>>arr[i][j];
        ll ans=n*m;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll temp=1;
                while(i-temp>=0 && i+temp<n && j-temp>=0 && j+temp<m && arr[i-temp][j]==arr[i+temp][j] && arr[i][j-temp]==arr[i][j+temp])
                {
                    ans++;
                    temp++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
