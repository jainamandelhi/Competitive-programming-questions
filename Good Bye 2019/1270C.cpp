#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 100000000
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
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        ll ans=0;
        for(ll i=0;i<n;i++)
            ans=ans^arr[i];
        if(sum==2*ans)
        {
            cout<<0<<endl;
            cout<<endl;
            continue;
        }
        ll a=ans;
        sum+=ans;
        cout<<2<<endl;
        cout<<a<<" "<<sum;
        cout<<endl;
    }
}
