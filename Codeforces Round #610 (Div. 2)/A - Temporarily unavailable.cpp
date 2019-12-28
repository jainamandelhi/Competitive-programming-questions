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
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        if(b<a)
            swap(a,b);
        if(c>b)
        {
            r=r-(c-b);
            if(r<0)
            {
                cout<<b-a<<endl;
                continue;
            }
            r++;
            ll tt=0;
            cout<<max(tt,b-a+1-r)<<endl;
            continue;
        }
        if(c<a)
        {
            r=r-(a-c);
            if(r<0)
            {
                cout<<b-a<<endl;
                continue;
            }
            r++;
            ll tt=0;
            cout<<max(tt,b-a+1-r)<<endl;
            continue;
        }
        ll tt=0;
        ll temp=max(tt,b-c-r);
        temp=temp+max(tt,c-r-a);
        cout<<temp<<endl;
    }
}
