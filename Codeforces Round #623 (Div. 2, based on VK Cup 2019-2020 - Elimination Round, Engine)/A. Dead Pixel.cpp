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
        ll a,b,x,y;
        cin>>a>>b>>x>>y;
        x++;
        y++;
        ll ans=0;
        if(x-1>0)
        {
            ans=max(ans,(x-1)*b);
        }
        if(x+1<=a)
        {
            ans=max(ans,(a-x)*b);
        }
        if(y-1>0)
        {
            ans=max(ans,(y-1)*a);
        }
        if(y+1<=b)
        {
            ans=max(ans,(b-y)*a);
        }
        cout<<ans<<endl;
    }
}
