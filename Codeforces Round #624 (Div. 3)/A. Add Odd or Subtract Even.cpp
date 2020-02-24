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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0;
        }
        else if(a<b)
        {
            ll c=b-a;
            if(c%2==0)
            {
                cout<<2;
            }
            else
            {
                cout<<1;
            }
        }
        else
        {
            ll c=a-b;
            if(c%2==0)
            {
                cout<<1;
            }
            else
            {
                cout<<2;
            }
        }
        cout<<endl;
    }
}
