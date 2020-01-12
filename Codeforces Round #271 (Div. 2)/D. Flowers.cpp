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
    ll k;
    cin>>t>>k;
    vector<ll>arr(100001);
    for(ll i=0;i<=100000;i++)
    {
        if(i<k)
            arr[i]=1;
        else{
            arr[i]=(arr[i-1]%mod+arr[i-k]%mod)%mod;
            arr[i]%=mod;
        }
    }
    for(ll i=1;i<=100000;i++){
        arr[i]=(arr[i]%mod+arr[i-1]%mod)%mod;
        arr[i]%=mod;
    }
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans1=arr[b]-arr[a-1];
        if(ans1<0)
            ans1=mod+ans1;
        cout<<ans1<<endl;
    }
}
