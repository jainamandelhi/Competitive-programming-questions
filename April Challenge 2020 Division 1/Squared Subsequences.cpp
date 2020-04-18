#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 998244353
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
        ll n;
        cin>>n;
        ll arr[n];
        ll cnt = 0;
        ll prev = -1, prev1 = -1;
        for(ll i = 0; i < n; i++)
        {
            cin>>arr[i];
            if((arr[i] % 2 == 0) && (arr[i] % 4 != 0))
            {
                cnt += i-prev;
                prev1 = prev;
                prev = i;
            }
            else if(arr[i] % 4 == 0)
            {
                prev = i;
                prev1 = i;
            }
            else
            {
                cnt += prev-prev1;
            }
        }
        cout<<(n*(n+1))/2 - cnt<<endl;
    }
}
