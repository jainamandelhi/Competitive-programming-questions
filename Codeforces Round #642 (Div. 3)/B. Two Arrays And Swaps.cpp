/* Isn't passion overrated? */

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
        ll n,k;
        cin>>n>>k;
        ll a[n],b[n];
        for(ll i = 0; i < n; i++)
            cin>>a[i];
        for(ll i = 0; i < n; i++)
            cin>>b[i];
        while(k--)
        {
            sort(a,a+n);
            sort(b,b+n);
            if(a[0] > b[n-1])
                break;
            swap(a[0],b[n-1]);
        }
        ll sum = 0;
        for(ll i = 0; i < n; i++)
            sum += a[i];
        cout<<sum<<endl;
    }
    return 0;
}
