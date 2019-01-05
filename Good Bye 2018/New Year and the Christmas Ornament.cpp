#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll y,b,r;
    cin>>y>>b>>r;
    y+=2;
    b+=1;
    ll x;
    x=min(y,b);
    x=min(x,r);
    if(x==y)
    {
        cout<<y-2+y-1+y;
    }
    else if(x==b)
        cout<<b-1+b-2+b;
    else
        cout<<r+r-1+r-2;
    return 0;
}
