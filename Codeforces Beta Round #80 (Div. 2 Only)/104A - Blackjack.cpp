#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    n-=10;
    if(n<=0 || n>11)
    {
        cout<<0;
        return 0;
    }
    else if(n==10)
        cout<<15;
    else
        cout<<4;
}
