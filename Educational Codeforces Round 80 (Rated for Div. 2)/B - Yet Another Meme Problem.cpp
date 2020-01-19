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
        ll a,b;
        cin>>a>>b;
        ll cnt=0;
        ll temp=b;
        while(temp)
        {
            cnt++;
            temp/=10;
        }
        ll p=0;
        if(pow(10,cnt)-1<=b)
            cnt++;
        cout<<max(p,(cnt-1)*a)<<endl;
    }
}
