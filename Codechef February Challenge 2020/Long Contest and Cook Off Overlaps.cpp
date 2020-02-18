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
ll f(ll d, ll m, ll y)
{
    static ll t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll m1,y1,m2,y2;
        cin>>m1>>y1>>m2>>y2;
        if(m1>2)
            y1++;
        if(m2<2)
            y2--;
        ll ans=0;
        ll temp=y2-y1;
        temp/=2800;
        y1=y1+temp*2800;
        ans=temp*707;
        for(ll i=y1;i<=y2;i++)
        {
            ll a=f(1,2,i);
            //cout<<a<<" ";
            if(i%100==0)
            {
                if(i%400==0 && a==6)
                    ans++;
                else if(a==0 || a==6)
                    ans++;
            }
            else if(i%4==0)
            {
                if(a==6)
                    ans++;
            }
            else if(a==0 || a==6)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
