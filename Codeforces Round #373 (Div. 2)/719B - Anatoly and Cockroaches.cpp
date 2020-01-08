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
	ll n;
	cin>>n;
	string s;
	cin>>s;
	ll reven=0,rodd=0,beven=0,bodd=0;
	for(ll i=0;i<n;i++)
    {
        if(i%2)
        {
            if(s[i]=='r')
                rodd++;
            if(s[i]=='b')
                bodd++;
        }
        else
        {
            if(s[i]=='r')
                reven++;
            if(s[i]=='b')
                beven++;
        }
    }
    cout<<min(max(reven,bodd),max(rodd,beven));
}
