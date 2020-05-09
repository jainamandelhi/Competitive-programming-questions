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
        ll a,b,c;
        cin>>a>>b>>c;
        if(b == 0)
        {
            if(a == 0)
            {
                for(ll i = 0; i <= c; i++)
                    cout<<1;
            }
            else
            {
                for(ll i = 0; i <= a; i++)
                    cout<<0;
            }
            cout<<endl;
            continue;
        }
        for(ll i = 0; i <= a; i++)
            cout<<0;
        for(ll j = 0; j <= c; j++)
            cout<<1;
        for(ll i = 0; i < b-1; i += 2)
        {
            if(i+1 < b-1)
                cout<<"01";
            else
                cout<<0;
        }
        cout<<endl;
        continue;
    }
    return 0;
}
