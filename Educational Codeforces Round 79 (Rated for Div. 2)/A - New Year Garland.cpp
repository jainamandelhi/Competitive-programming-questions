#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
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
        ll n=max(a,max(b,c));
        ll m=a+b+c;
        if(m%2)
            m++;
        m/=2;
        if(m>=n)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
}
