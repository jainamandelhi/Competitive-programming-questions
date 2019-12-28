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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        ll ans=0;
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll maxi=0,maxindex=-1,sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=arr[i];
            if(maxi<arr[i])
            {
                if(sum-arr[i]>m)
                    break;
                maxi=arr[i];
                maxindex=i;
            }
            if(sum>m)
            {
                if(sum-maxi<=m)
                {
                    ans=maxindex+1;
                    continue;
                }
                else
                {
                    break;
                }
            }
        }
        if(maxindex==-1)
            cout<<0;
        else
            cout<<ans;
        cout<<endl;
    }
}
