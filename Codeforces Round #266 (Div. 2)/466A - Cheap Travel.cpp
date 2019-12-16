#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
int main()
{
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    ll temp=m*a;
    if(temp<=b)
    {
        cout<<a*n;
    }
    else
    {
        temp=(n/m)*b;
        cout<<temp+min((n-n/m*m)*a , b);
    }
}
