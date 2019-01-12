#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a=sqrt(n);
    if(a*a==n)
        cout<<2*a;
    else{
        if(a*(a+1)>=n)
            cout<<2*a+1;
        else
            cout<<2*a+2;
    }
    return 0;
}
