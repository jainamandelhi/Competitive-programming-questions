#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<x<<" "<<x*(y/x)<<endl;
    }
    return 0;
}
