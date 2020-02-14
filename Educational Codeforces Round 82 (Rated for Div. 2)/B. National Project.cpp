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
        ll n,g,b;
        cin>>n>>g>>b;
        ll m=n/2;
        if(n%2)
            m++;
        ll ans=0;
        ll temp1=m/g;
        ll temp2=temp1*g;
        ans=temp2;
        m=m-temp2;
        n=n-temp2;
        if(m>0)
        {
            ans+=m;
            n=n-m;
        }
        if(m>0)
            temp1++;
        ans=ans+(temp1-1)*b;
        temp2=(temp1-1)*b;
        n=n-temp2;
        if(n<=0)
        {
            cout<<ans<<endl;
            continue;
        }
        ll temp3=g-m+b;
        if(m==0)
            temp3=b;
        if(n<=temp3)
        {
            ans+=n;
            cout<<ans<<endl;
            continue;
        }
        n-=temp3;
        ans+=n+temp3;
        cout<<ans<<endl;
    }
}
