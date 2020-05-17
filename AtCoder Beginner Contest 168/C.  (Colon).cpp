/* Isn't passion overrated?*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
double pi = 3.14159265358979323846;
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll a,b,h,m;
    cin>>a>>b>>h>>m;
    double d1 = (h*60+m)/2.0;
    double d2 = 6.0*(m+h*60);
    double angle = min(abs(d1-d2),360.0-abs(d1-d2));
    //out<<angle<<endl;
    angle = pi*angle/180;
    angle = cos(angle);
    double ans = a*a + b*b - angle*2*a*b;
    ans = sqrt(ans);
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}
