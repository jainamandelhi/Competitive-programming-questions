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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b;
        c = a, d = b;
        ll mini = INT_MAX;
        mini = min(mini, max(a+c,max(b,d)));
        mini = min(mini, max(a+d,max(b,c)));
        mini = min(mini, max(b+c,max(a,d)));
        mini = min(mini, max(d+b,max(a,c)));
        cout<<mini*mini<<endl;
    }
    return 0;
}
