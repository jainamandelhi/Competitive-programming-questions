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
vector<vector<ll> >arr(100001);
vector<ll>cnt(100001);
vector<ll>vis(100001);
vector<ll>out;
void func(ll i, ll arr1[], ll arr2[])
{
    if(vis[i]==0)
        vis[i]=1;
    for(ll j=0;j<arr[i].size();j++)
    {
        for(ll k=0;k<arr[arr[i][j]].size();k++)
        {
            if(vis[arr[arr[i][j]][k]]!=0)
            continue;
          // cout<<i<<" "<<arr[arr[i][j]][k]<<" "<<cnt[i]<<endl;
            if(arr1[arr[arr[i][j]][k]]!=arr2[arr[arr[i][j]][k]])
            {
                if(cnt[i]%2==0)
                {
                    //cout<<i<<" "<<" "<<arr[arr[i][j]][k]<<" ";
                    out.pb(arr[arr[i][j]][k]);
                    cnt[arr[arr[i][j]][k]]=1+cnt[i];
                }
                else
                    cnt[arr[arr[i][j]][k]]=cnt[i];
            }
            else
            {
                //cout<<i<<" "<<arr[arr[i][j]][k]<<" "<<cnt[i]<<endl;
                if(cnt[i]%2==0)
                    cnt[arr[arr[i][j]][k]]=cnt[i];
                else
                {
                    out.pb(arr[arr[i][j]][k]);
                    cnt[arr[arr[i][j]][k]]=1+cnt[i];
                }
            }
            if(vis[arr[arr[i][j]][k]]==0)
                func(arr[arr[i][j]][k],arr1,arr2);
        }
    }

}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n;
	cin>>n;
	vector<ll>vis1(n+1);
	vis1[1]=1;
	for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        if(vis1[a])
            arr[a].pb(b);
        else
            arr[b].pb(a);
        vis1[a]=1;
        vis1[b]=1;
    }
    arr[0].pb(1);
    ll arr1[n+1],arr2[n+1];
    for(ll i=1;i<=n;i++)
        cin>>arr1[i];
    for(ll i=1;i<=n;i++)
        cin>>arr2[i];
    if(arr1[1]==arr2[1])
        cnt[1]=0;
    else{
        cnt[1]=1;
        out.pb(1);
    }
    /*for(ll i=0;i<arr[1].size();i++)
    {
        if(arr1[arr[1][i]]!=arr2[arr[1][i]])
        {
            out.pb(arr[1][i]);
            cnt[arr[1][i]]=1;
        }
    }*/
    func(1,arr1,arr2);
    func(0,arr1,arr2);
   cout<<out.size()<<endl;
   for(ll i=0;i<out.size();i++)
    cout<<out[i]<<endl;
}
