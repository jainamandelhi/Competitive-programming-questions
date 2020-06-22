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
        n *= 2;
        ll a;
        vector<ll>o;
        vector<ll>e;
        for(ll i = 0; i < n; i++)
        {
            cin>>a;
            if(a%2 != 0)
                o.pb(i+1);
            else
                e.pb(i+1);
        }
        ll flag = 0;
        ll m1 = e.size(), m2 = o.size();
        ll i = 0, j = 0;
        if(m1 == 0)
        {
            j += 2;
        }
        else if(m2 == 0)
        {
            i += 2;
        }
        else if(m1 % 2 == 0)
        {
            i += 2;
        }
        else
        {
            i++;
            j++;
        }
        while(i < m1)
        {
            cout<<e[i]<<" "<<e[i+1]<<endl;
            i += 2;
        }
        while(j < m2)
        {
            cout<<o[j]<<" "<<o[j+1]<<endl;
            j += 2;
        }
    }
    return 0;
}
