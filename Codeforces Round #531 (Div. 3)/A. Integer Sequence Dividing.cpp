#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%2==1)
    {
        n--;
        n/=2;
        if(n%2==0)
            cout<<1;
        else
            cout<<0;
    }
    else
    {
        n/=2;
        if(n%2==0)
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}
