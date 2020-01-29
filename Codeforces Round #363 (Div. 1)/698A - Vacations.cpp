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
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<ll>ans(n+1);
    vector<vector<ll> >v(n+1,vector<ll>(2));
    for(ll i=1;i<=n;i++)
    {
        if(arr[i-1]==3)
        {
            ans[i]=ans[i-1];
            if(v[i-1][0]==0 && v[i-1][1]==0)
            {
                v[i][0]=2;
                v[i][1]=2;
            }
            else if(v[i-1][0]==2 && v[i-1][1]==2)
            {
                v[i][0]=2;
                v[i][1]=2;
            }
            else if(v[i-1][0]==0)
                v[i][0]=1;
            else if(v[i-1][1]==0)
                v[i][1]=1;
        }
        else if(arr[i-1]==2)
        {
            if(v[i-1][0]==2 || v[i-1][0]==0){
                v[i][0]=1;
                ans[i]=ans[i-1];
            }
            else if(v[i-2][0]==2 || v[i-2][0]==0)
            {
                ans[i]=ans[i-2]+1;
            }
        }
        else if(arr[i-1]==1)
        {
            if(v[i-1][1]==2 || v[i-1][1]==0){
                v[i][1]=1;
                ans[i]=ans[i-1];
            }
            else if(v[i-2][1]==2 || v[i-2][1]==0)
            {
                ans[i]=ans[i-2]+1;
            }
        }
        else
            ans[i]=ans[i-1]+1;
    }
    cout<<ans[n];
}
