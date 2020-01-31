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
	ll arr1[n],arr2[n];
	for(ll i=0;i<n;i++)
        cin>>arr1[i];
    for(ll i=0;i<n;i++)
        cin>>arr2[i];
    vector<vector<ll> >v(n,vector<ll>(2));
    v[0][0]=arr1[0];
    v[0][1]=arr2[0];
    for(ll i=1;i<n;i++)
    {
        if(i==1)
        {
            v[i][0]=arr1[i]+v[i-1][1];
            v[i][1]=arr2[i]+v[i-1][0];
            continue;
        }
        v[i][0]=max(arr1[i]+v[i-1][1],max(arr1[i]+v[i-2][1],v[i-1][0]));
        v[i][1]=max(arr2[i]+v[i-1][0],max(arr2[i]+v[i-2][0],v[i-1][1]));
    }
    cout<<max(v[n-1][0],v[n-1][1]);
}
