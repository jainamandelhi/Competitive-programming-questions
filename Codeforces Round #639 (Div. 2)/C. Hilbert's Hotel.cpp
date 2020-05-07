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
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin>>arr[i];
        ll flag = 1;
        set<ll>s;
        for(ll i = 0; i < n; i++)
        {
            ll a = i+arr[i];
            a %= n;
            if(a < 0)
                a += n;
            if(s.find(a) != s.end())
            {
                flag = 0;
                break;
            }
            s.insert(a);
        }
        if(flag == 0)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
    return 0;
}
