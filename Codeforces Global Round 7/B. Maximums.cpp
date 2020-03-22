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
    cout<<arr[0]<<" ";
    ll maxi = arr[0];
    for(ll i=1;i<n;i++)
    {
        ll a = maxi + arr[i];
        maxi = max(maxi,a);
        cout<<a<<" ";
    }
}
