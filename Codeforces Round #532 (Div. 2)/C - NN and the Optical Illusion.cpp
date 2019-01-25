#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
using namespace std;
int gcd(int a, int b)
{
    if (b==0)
       return a;
    return gcd(b, a%b);
}
int main()
{
const long double pi = 3.141592653589793238L;
    FAST;
    ll r,n;
    cin>>n>>r;
    double a=r*sin(pi/n);
    double b=1-sin(pi/n);
    cout<<setprecision(8)<<a/b;
    return 0;
}
