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
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        ll temp1 = a-b;
        ll temp2 = a+b;
        ll temp3 = c-d;
        ll temp4 = c+d;
        if(temp1*n <= temp4 && temp2*n >= temp3)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}
