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
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    for(ll i=0;i <n;i++)
        cin>>arr[i];
    vector<ll>a(n);
    vector<ll>b(n);
    ll flag1=0,flag2=0;
    for(ll i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            flag2=0;
            if(flag1==0)
                a[i+1]=a[i]+1;
            else
                a[i+1]=a[i];
            b[i+1]=b[i];
            flag1=1;
        }
        else if(arr[i]>arr[i+1])
        {
            flag1=0;
            if(flag2==0)
                b[i+1]=b[i]+1;
            else
                b[i+1]=b[i];
            a[i+1]=a[i];
            flag2=1;
        }
        else
        {
            flag1=0;
            flag2=0;
            a[i+1]=a[i];
            b[i+1]=b[i];
        }
    }
    while(m--)
    {
        ll p,q;
        cin>>p>>q;
        p--;
        q--;
        ll ans1=a[q]-a[p];
        ll ans2=b[q]-b[p];
        if(a[p]==a[p+1] && arr[p+1]>arr[p] && a[p]>0)
            ans1=a[q]-a[p]+1;
        else if(b[p]==b[p+1] && arr[p+1]<arr[p] && b[p]>0)
            ans2=b[q]-b[p]+1;
        if(ans1==ans2)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
}
