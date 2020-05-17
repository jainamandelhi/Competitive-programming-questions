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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    string s;
    cin>>n>>s;
    ll m = s.size();
    for(ll i = 0; i <min(m,n); i++)
        cout<<s[i];
    if(m > n)
        cout<<"...";
    return 0;
}
