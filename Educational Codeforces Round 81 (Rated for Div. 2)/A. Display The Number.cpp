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
	ll t;
	cin>>t;
	while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        {
            ll p=n/2;
            for(ll i=0;i<p;i++)
                cout<<1;
        }
        else
        {
            n-=3;
            cout<<7;
            n/=2;
            for(ll i=0;i<n;i++)
                cout<<1;
        }
        cout<<endl;
    }
}
