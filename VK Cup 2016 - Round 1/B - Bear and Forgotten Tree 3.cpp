#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
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
	ll n,d,h;
	cin>>n>>d>>h;
	ll temp=1;
	if(n<=d || n<=h || d>2*h)
    {
        cout<<-1;
        return 0;
    }
    if(n==1)
    {
        if(d!=0 && h!=0)
            cout<<-1;
        return 0;
    }
    if(d==1 && n!=2)
    {
        cout<<-1;
        return 0;
    }
    vector<ll>arr(n+1);
    arr[1]=1;
    ll flag=0;
    for(ll i=2;i<=n;i++)
    {
        if(h>0)
        {
            arr[i]=i-1;
            temp=i-1;
            h--;
            d--;
            continue;
        }
        if(d>0)
        {
            if(flag==0)
                arr[i]=1;
            else
                arr[i]=i-1;
            temp=arr[i];
            flag=1;
            d--;
            continue;
        }
        if(temp==1)
            arr[i]=1;
        else
            arr[i]=temp;
    }
    for(ll i=2;i<=n;i++)
    {
        cout<<arr[i]<<" "<<i<<endl;
    }
}
