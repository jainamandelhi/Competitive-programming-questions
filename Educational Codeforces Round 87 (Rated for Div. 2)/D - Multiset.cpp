/* Isn't passion overrated?*/

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
void update(ll a, ll u, vector<ll>&tree, ll n)
{
    while(a <= n)
    {
        tree[a] += u;
        a += (a & (-a));
    }
}
ll sum(ll a, vector<ll>&tree)
{
    ll ans = 0;
    while(a)
    {
        ans += tree[a];
        a -= (a & (-a));
    }
    return ans;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,q;
    cin>>n>>q;
    vector<ll>tree(n+1);
    for(ll i = 0; i < n; i++)
    {
        ll a;
        cin>>a;
        update(a, 1, tree, n);
    }
    while(q--)
    {
        ll a;
        cin>>a;
        if(a < 0)
        {
            ll st = 1;
            ll en = n;
            a = abs(a);
            ll mid, j;
            while(st <= en)
            {
                mid = st + (en-st)/2;
                if(sum(mid, tree) >= a)
                {
                    en = mid - 1;
                    j = mid;
                }
                else
                {
                    st = mid + 1;
                }
            }
            update(j, -1, tree, n);
        }
        else
            update(a, 1, tree, n);
    }
    for(ll i = 1; i <= n; i++)
    {
        if(sum(i, tree) > 0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
