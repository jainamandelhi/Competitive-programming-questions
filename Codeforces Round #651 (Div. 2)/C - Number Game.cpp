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
        if(n == 1)
        {
            cout<<"FastestFinger"<<endl;
            continue;
        }
        if(n == 2 || n % 2)
        {
            cout<<"Ashishgup"<<endl;
            continue;
        }
        ll m = n;
        set<ll>s;
        for(ll i = 2; i <= sqrt(n); i++)
        {
            if(m % i == 0)
            {
                if(i % 2)
                    s.insert(i);
                ll p = m/i;
                if(p % 2)
                    s.insert(p);
            }
        }
        if(s.size() > 1 || (m%4 == 0 && s.size()))
            cout<<"Ashishgup";
        else
            cout<<"FastestFinger";
        cout<<endl;
    }
    return 0;
}
