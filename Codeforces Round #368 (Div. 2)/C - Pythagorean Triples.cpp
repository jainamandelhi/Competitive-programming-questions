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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    if(n%2)
    {
        ll b=n*n-1;
        b/=2;
        if(b==0)
            cout<<-1;
        else
            cout<<b<<" "<<b+1;
    }
    else
    {
        ll b=n*n-4;
        b/=4;
        if(b==0)
            cout<<-1;
        else
            cout<<b<<" "<<b+2;
    }
}
