#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" ";
        while(1)
        {
            if(l2!=l1)
            {
                cout<<l2<<endl;
                break;
            }
            l2++;
        }
    }
    return 0;
}
