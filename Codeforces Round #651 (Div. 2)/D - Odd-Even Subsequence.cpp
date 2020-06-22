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
bool check(ll mid, ll arr[], ll k, ll n)
{
    bool temp1, temp2;
    ll par = 0;
    ll cnt = 1;
    for(ll i = 1; i < n; i++)
    {
        if(par == 0)
        {
            if(arr[i] <= mid)
            {
                cnt++;
                par = 1;
            }
        }
        else
        {
            cnt++;
            par = 0;
        }
    }
    temp1 = (cnt >= k);
    cnt = 0;
    par = 1;
    for(ll i = 0; i < n; i++)
    {
        if(par == 1)
        {
            if(arr[i] <= mid)
            {
                cnt++;
                par = 0;
            }
        }
        else
        {
            cnt++;
            par = 1;
        }
    }
    temp2 = (cnt >= k);
    return temp1 || temp2;
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0; i < n; i++)
        cin>>arr[i];
    ll ans;
    ll i = 1, j = 1000000000;
    while(i < j)
    {
        ll mid = i + j;
        mid /= 2;
        if(check(mid, arr, k, n))
        {
            ans = mid;
            j = mid;
        }
        else
            i = mid + 1;
    }
    cout<<ans;
    return 0;
}
