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
        set<ll>s;
        ll n;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
