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
    ll n,t;
    cin>>n>>t;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    for(ll i=1;i<n;i++)
        arr[i]+=arr[i-1];
    ll i=0,j=0;
    ll ans=0;
    while(j<n)
    {
        ll cost=0;
        cost+=arr[j];
        if(i>0)
            cost-=arr[i-1];
        if(cost<=t)
        {
            ans=max(ans,j-i+1);
            j++;
        }
        else
        {
            if(i==j)
            {
                i++;
                j++;
            }
            else
                i++;
        }
    }
    cout<<ans;
}
