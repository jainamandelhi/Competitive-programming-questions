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
        ll a,b,c;
        cin>>a>>b>>c;
        ll mini=INT_MAX;
        ll p,q,r;
        ll temp=0;
        for(ll i=1;i<=11001;i++)
        {
            for(ll j=i;j<=11001;j+=i)
            {
                for(ll k=j;k<=11001;k+=j)
                {
                    temp=abs(i-a)+abs(j-b)+abs(k-c);
                    if(temp<mini)
                    {
                        mini=temp;
                        p=i;
                        q=j;
                        r=k;
                    }
                }
            }
        }
        cout<<mini<<endl;
        cout<<p<<" "<<q<<" "<<r<<endl;
    }
}
