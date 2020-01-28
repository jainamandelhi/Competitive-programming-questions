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
    {
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<arr[i+1]-arr[i]<<" "<<arr[n-1]-arr[i]<<endl;
            continue;
        }
        if(i==n-1)
        {
            cout<<arr[i]-arr[i-1]<<" ";
            cout<<arr[i]-arr[0];
            continue;
        }
        cout<<min(arr[i]-arr[i-1],arr[i+1]-arr[i])<<" ";
        cout<<max(arr[i]-arr[0],arr[n-1]-arr[i])<<endl;
    }
}
