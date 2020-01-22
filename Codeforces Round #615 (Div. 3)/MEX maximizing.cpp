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
//vector<ll>arr3(1000000001);
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin>>t;
    ll x;
    cin>>x;
    unordered_map<ll,ll>m1;
    ll ans=0;
    set<ll>m;
    while(t--)
    {
        ll a;
        cin>>a;
        ll b=a;
        b=b-b/x*x;
        ll d=b;
        if(b<ans)
        {
            b=b+(ans-b)/x*x;
           // b+=x;
        }
        if(m1.find(d)!=m1.end())
        {
            b=max(b,m1[d]);
        }
        while(b<=1000000000 && m.find(b)!=m.end())
        {
            b+=x;
        }
        //cout<<b<<endl;
        m.insert(b);
        m1[a]=b;
        //m1[c]=b;
        m1[d]=b;
        while(m.find(ans)!=m.end())
            ans++;
        cout<<ans<<endl;
    }
}
