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
    ll n;
    double m;
    cin>>n>>m;
    double arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    double sum = 0;
    for(ll i=0;i<n;i++)
        sum += arr[i];
    sum /=(4*1.0*m);
    ll cnt = 0;
    for(ll i=0;i<n;i++)
    {
        if(sum <= arr[i])
            cnt++;
    }
    if(cnt>=m)
        cout<<"Yes";
    else
        cout<<"No";
}
