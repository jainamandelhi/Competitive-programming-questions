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
        ll n;
        cin>>n;
        if(n < 4)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n%2 == 0)
        {
            for(ll i = 2; i <= n; i += 2)
                cout<<i<<" ";
            cout<<n-3<<" ";
            cout<<n-1<<" ";
            for(ll j = n-5; j >= 1; j -= 2)
                cout<<j<<" ";
        }
        else
        {
            for(ll i = 1; i <= n; i += 2)
                cout<<i<<" ";
            cout<<n-3<<" ";
            cout<<n-1<<" ";
            for(ll j = n-5; j >= 1; j -= 2)
                cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
