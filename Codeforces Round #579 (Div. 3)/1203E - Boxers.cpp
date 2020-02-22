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
//vector<ll>arr(1000000001,1);
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    set<ll>s;
    for(ll i=0;i<n;i++)
    {
        ll a=arr[i];
        if(a-1>0 && s.find(a-1)==s.end())
                s.insert(a-1);
        else if(s.find(a)==s.end())
            s.insert(a);
        else
            s.insert(a+1);
    }
    cout<<s.size();
}
