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
        ll p;
        cin>>p;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n,greater<ll>());
        set<ll>s;
        for(ll i=0;i<n;i++)
            s.insert(arr[i]);
        if(s.find(p)!=s.end())
        {
            cout<<1<<endl;
            continue;
        }
        ll temp=p/arr[0];
        if(temp==0)
        {
            cout<<2<<endl;
            continue;
        }
        else if(temp*arr[0]==p)
        {
            cout<<temp<<endl;
        }
        else
        {
            cout<<temp+1<<endl;
        }
    }
}
