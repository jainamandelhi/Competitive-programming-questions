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
    string s,t;
    cin>>s>>t;
    string tt = s;
    tt.pb(t[t.size()-1]);
    if(s.size() == t.size()-1 &&  tt== t)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
