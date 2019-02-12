#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;

int main()
{
    ll k,n;
    cin>>k>>n;
    ll ans=k%10;
    ll ans1=0;
    ll arr[n];
    for(ll i=0;i<n-1;i++)
        {
            cin>>arr[i];
            ans1=(ans1%10+(arr[i]*ans)%10)%10;
        }
    ll a;
    cin>>a;
    ans1=(ans1%10+(a)%10)%10;
    if(ans1%2==0)
        cout<<"even";
    else
        cout<<"odd";
    return 0;
}
