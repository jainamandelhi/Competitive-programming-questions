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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a == c)
        {
            if(a == b+d){
                cout<<"Yes"<<endl;
            continue;
            }
        }
        if(a == d)
        {
            if(a == b+c){
                cout<<"Yes"<<endl;
            continue;
            }
        }
        if(b == c)
        {
            if(b == a+d){
                cout<<"Yes"<<endl;
            continue;
            }
        }
        if(b == d)
        {
            if(b == a+c){
                cout<<"Yes"<<endl;
            continue;
            }
        }
        cout<<"No"<<endl;
    }
    return 0;
}
