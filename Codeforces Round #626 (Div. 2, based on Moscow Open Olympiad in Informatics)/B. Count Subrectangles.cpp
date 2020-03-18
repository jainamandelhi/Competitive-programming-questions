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
ll arr1[400002]={0},arr2[400002]={0};
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll j=0;j<m;j++)
        cin>>b[j];
    for(ll i=1;i<n;i++)
        if(a[i])
            a[i]+=a[i-1];
    for(ll i=1;i<m;i++)
        if(b[i])
            b[i]+=b[i-1];
    for(ll i=0;i<n;i++)
        arr1[a[i]]++;
    for(ll j=0;j<m;j++)
        arr2[b[j]]++;
    for(ll i=400000;i>=0;i--)
        arr1[i]+=arr1[i+1];
    for(ll i=400000;i>=0;i--)
        arr2[i]+=arr2[i+1];
    ll ans=0;
    /*for(ll i=0;i<=5;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    for(ll i=0;i<=5;i++)
        cout<<arr2[i]<<" ";
    cout<<endl;*/
    for(ll i=1;i<=sqrt(k);i++)
    {
        if(k%i==0)
        {
            if(k/i <= m)
            ans=ans+arr1[i]*arr2[k/i];
            if(i*i!=k && k/i <= n)
                ans=ans+arr2[i]*arr1[k/i];
        }
    }
    cout<<ans;
}
