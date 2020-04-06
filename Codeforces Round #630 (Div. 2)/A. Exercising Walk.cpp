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
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,x2,y1,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if(x == x1 && x == x2)
        {
            if(a || b){
                cout<<"No"<<endl;
                continue;
            }
        }
        if(y == y1 && y == y2)
        {
            if(c || d){
                cout<<"No"<<endl;
                continue;
            }
        }
        ll temp = b-a;
        x += temp;
        temp = d-c;
        y += temp;
        if(x < x1 || x > x2 || y < y1 || y > y2)
        {
            cout<<"No"<<endl;
            continue;
        }
        cout<<"Yes"<<endl;
    }
    return 0;
}
