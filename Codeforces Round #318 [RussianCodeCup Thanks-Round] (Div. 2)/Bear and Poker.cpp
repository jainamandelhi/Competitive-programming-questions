#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    for(ll i=0;i<n;i++)
    {
        while(arr[i]%2==0)
            arr[i]/=2;
        while(arr[i]%3==0)
            arr[i]/=3;
    }
    ll x=arr[0];
    for(ll i=0;i<n;i++)
        if(x!=arr[i])
        {
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
	return 0;
}
