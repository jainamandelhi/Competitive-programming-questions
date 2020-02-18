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
        for(ll i=1;i<n;i++)
        {
            while(arr[i]>0 && p-i>=0)
            {
                p-=i;
                arr[i]--;
                arr[0]++;
            }
            if(p-i<0)
                break;
        }
        cout<<arr[0]<<endl;
    }
}
