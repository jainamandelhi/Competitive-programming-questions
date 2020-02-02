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
        ll maxi=arr[0];
        string ans="Yes";
        for(ll i=1;i<n;i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                continue;
            }
            else
            {
                if(arr[i]==arr[i-1])
                {
                    if(arr[i]-i>=0 || arr[i]-(n-i)>=0)
                        continue;
                    else
                    {
                        ans="No";
                        break;
                    }
                }
                else if(arr[i]-i>=0 || arr[i]-(n-1-i)>=0)
                    continue;
                else{
                    ans="No";
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}
