#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    double n,m;
    cin>>m>>n;
    double ans=0;
    for(ll i=1;i<=m;i++)
    {
        ans=ans+i*(pow(i/m,n)-pow((i-1)/m,n));
    }
    cout<<ans;
}
