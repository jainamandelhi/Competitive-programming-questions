#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
    ll n,m;
    cin>>n>>m;
    vector<string>v1,v2;
    for(ll i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v1.pb(s);
    }
    for(ll i=0;i<m;i++)
    {
        string s;
        cin>>s;
        v2.pb(s);
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll q;
        cin>>q;
        q--;
        cout<<v1[q%n]<<v2[q%m]<<endl;
    }
}
