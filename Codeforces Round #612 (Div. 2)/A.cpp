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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll j=n-1;
        ll maxi=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='A')
            {
                maxi=max(maxi,j-i);
                j=i-1;
            }
        }
        cout<<maxi;
        cout<<endl;
    }
}
