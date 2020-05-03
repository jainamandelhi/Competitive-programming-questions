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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i = 1;
        vector<ll>arr;
        ll sum = 0;
        while(sum + i <= n)
        {
            sum += i;
            //cout<<i<<endl;
            arr.pb(i);
            i *= 2;
        }
        if(sum < n)
            arr.pb(n - sum);
        sort(arr.begin(),arr.end());
        cout<<arr.size()-1<<endl;
        for(ll i = 1; i < arr.size(); i++)
            cout<<arr[i] - arr[i-1]<<" ";
        cout<<endl;
    }
    return 0;
}
