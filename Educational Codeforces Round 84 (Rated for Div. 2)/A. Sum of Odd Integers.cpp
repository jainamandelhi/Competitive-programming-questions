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
        ll k;
        cin>>k;
        ll a = k;
        a = a*(2+(k-1)*2);
        a /= 2;
        if(k>n || a>n)
        {
            cout<<"NO";
            cout<<endl;
            continue;
        }
        if(n%2 && k%2)
            cout<<"YES";
        else if(n%2 == 0 && k%2 == 0)
        {
            cout<<"YES";
        }
        else
            cout<<"NO";
        cout<<endl;
    }
}
