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
        ll flag = 0;
        for(ll i = 0; i <= n; i++)
        {
            if(n - 7*i < 0)
                continue;
            ll temp = n - 7*i;
            if(temp % 3 == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}
