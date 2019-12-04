#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll odd=0,even=0;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a%2)
            odd++;
        else
            even++;
    }
    if(odd%2)
        cout<<odd;
    else
        cout<<even;
}
