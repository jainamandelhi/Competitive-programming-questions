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
    ll n,a,b,x;
    cin>>n>>a>>b>>x;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll p=a+b;
    for(ll i=0;i<n;i++)
    {
        ll temp;
        arr[i]%=p;
        if(arr[i]==0)
            arr[i]=a+b;
            if(arr[i]%a==0)
                temp=arr[i]/a;
            else
                temp=arr[i]/a+1;
            temp--;
            arr[i]=temp;
    }
    sort(arr,arr+n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(x-arr[i]>=0)
        {
            ans++;
        }
        x-=arr[i];
    }
    cout<<ans;
}
