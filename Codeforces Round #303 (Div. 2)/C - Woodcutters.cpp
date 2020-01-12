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
    vector<ll>pos,height;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        pos.pb(a);
        height.pb(b);
    }
    vector<ll>ans;
    ans.pb(-1);
    for(ll i=1;i<n;i++)
        ans.pb(pos[i]-pos[i-1]-1);
    ll temp=2,flag=0;
    for(ll i=1;i<n;i++)
    {
        if(ans[i]>=height[i])
        {
            if(i==n-1)
                flag=1;
            temp++;
            continue;
        }
        if(i+1<n && ans[i+1]>=height[i])
        {
            temp++;
            ans[i+1]-=height[i];
            continue;
        }
    }
    if(flag)
        temp--;
    if(n==1)
        temp=1;
   cout<<temp;
}
