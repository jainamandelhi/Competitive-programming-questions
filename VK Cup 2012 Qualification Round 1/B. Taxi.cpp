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
    ll n;
    cin>>n;
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        m[a]++;
    }
    ll ans=m[4];
    if(m[3]<=m[1])
    {
        m[1]-=m[3];
        ans+=m[3];
    }
    else
    {
        ans+=m[1];
        m[3]-=m[1];
        m[1]=0;
        ans+=m[3];
    }
    m[2]+=m[1]/2;
    m[1]%=2;
    ans+=m[2]/2;
    m[2]=m[2]-m[2]/2*2;
    if(m[1] || m[2])
        ans++;
    cout<<ans;
}
