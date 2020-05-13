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
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll ne;
    cin>>ne;
    ll arr[ne];
    for(ll i = 0; i < ne; i++)
        cin>>arr[i];
    ll p = 0, n = 0 , ans = 0;
    ll k = 0;
    for(ll i = 0; i < ne; i++)
    {
        if(arr[i] > 0)
        {
            if(n % 2 == 0)
            {
                p++;
                ans += p;
            }
            else
            {
                ans += k;
                k++;
            }
        }
        else
        {
            n++;
            if(n % 2 == 0)
            {
                p++;
                ans += p;
            }
            else
            {
                ans += k;
                k++;
            }
        }
    }
    cout<<(ne*(ne+1))/2 - ans<<" "<<ans;
    return 0;
}
