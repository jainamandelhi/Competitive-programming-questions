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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        ll maxi=max(a,max(b,c));
        ll temp=0;
        temp=3*maxi-a-b-c;
        temp=n-temp;
        if(temp<0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(temp%3)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<endl;
    }
}
