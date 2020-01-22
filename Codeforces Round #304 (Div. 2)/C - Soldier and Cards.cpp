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
int arr[5000001];
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    ll a;
    cin>>a;
    queue<ll>q1;
    for(ll i=0;i<a;i++)
    {
        ll m;
        cin>>m;
        q1.push(m);
    }
    ll b;
    cin>>b;
    queue<ll>q2;
    for(ll i=0;i<b;i++)
    {
        ll m;
        cin>>m;
        q2.push(m);
    }
    ll t1=q1.front(),t2=q2.front(),flag=0;
    ll ans=0;
    while(!q1.empty() && !q2.empty())
    {
        a=q1.front();
        b=q2.front();
        if(ans>10*9*8*7*6*5*4*3*2*2)
        {
            cout<<-1;
            return 0;
        }
        flag=1;
        q1.pop();
        q2.pop();
        ans++;
        if(a>b)
        {
            q1.push(b);
            q1.push(a);
        }
        else
        {
            q2.push(a);
            q2.push(b);
        }
    }
    if(!q1.empty())
        cout<<ans<<" "<<1;
    else
        cout<<ans<<" "<<2;
}
