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
        map<ll,ll>ma;
        ll arr1[n],arr2[m];
        for(ll i=0;i<n;i++)
            cin>>arr1[i];
        for(ll j=0;j<m;j++)
            cin>>arr2[j];
        ll ans=0;
        ll j=0;
        for(ll i=0;i<m;)
        {
            //cout<<ma.size()<<" ";
            if(ma.find(arr2[i])!=ma.end()){
                ans++;
                ma.erase(arr2[i]);
                i++;
            }
            else
            {
                while(j<n && arr1[j]!=arr2[i])
                {
                    ma[arr1[j]]++;
                    j++;
                }
                if(j<n)
                    ma[arr1[j]]++;
                j++;
                ans=ans+2*(ma.size()-1);
            }
        }
        cout<<ans<<endl;
    }
}
