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
        ll odd=0,even=0;
        for(ll i=0;i<n;i++)
        {
            if(arr[i]%2)
                odd++;
            else
                even++;
        }
        string ans;
        if(odd==0)
        {
            ans="NO";
        }
        else if(even==0 && odd%2==0)
        {
            ans="NO";
        }
        else
            ans="YES";
        cout<<ans<<endl;
    }
}
