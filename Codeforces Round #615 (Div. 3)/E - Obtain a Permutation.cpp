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
//vector<ll>arr3(1000000001);
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<m;j++)
            cin>>arr[i][j];
    ll ans=0;
    for(ll j=0;j<m;j++)
    {
        vector<ll>temp(n);
        for(ll i=0;i<n;i++)
        {
            ll a=arr[i][j]-1-j;
            if(a>=0 && a%m==0)
            {
                ll b=a/m;
                if(b>=n)
                    continue;
                if(b<=i)
                    temp[i-b]++;
                else
                {
                    temp[n-abs(b-i)]++;
                }
            }
        }
        //cout<<j<<" ";
        ll maxi=0,u=0,c=INT_MAX;
        for(ll k=0;k<n;k++)
        {
            if(temp[k]>maxi)
                u=k;
            maxi=max(maxi,temp[k]);
            ll a=n-maxi+u;
            c=min(a,c);
        }
        //if(n==200000 && m==1)
          //  cout<<maxi<<" "<<u<<" ";
        //cout<<maxi<<" "<<a<<endl;
        ans+=min(c,n);
    }
    cout<<ans;
}
