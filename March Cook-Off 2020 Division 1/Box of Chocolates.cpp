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
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll maxi = -1;
        for(ll i=0;i<n;i++)
            maxi = max(maxi,arr[i]);
        ll a1 = -1,a2 = -1;
        for(ll i=0;i<n;i++)
        {
            if(arr[i] == maxi)
            {
                if(a1 == -1)
                    a1 = i+1;
                else
                    a2 = i+1;
            }
        }
        if(a2 == -1)
            cout<<n/2<<endl;
        else
        {
            if(abs(a1-a2)>=n/2)
                cout<<0<<endl;
            else
                cout<<n/2-abs(a1-a2)<<endl;
        }
    }
}
