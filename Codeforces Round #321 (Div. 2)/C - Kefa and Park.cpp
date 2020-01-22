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
vector<ll>vis(100002);
ll ans=0;
vector<vector<ll> >arr2(100002);
vector<vector<ll> >arr1(100002);
void dfs(ll i)
{
    vis[i]=1;
    for(ll j=0;j<arr1[i].size();j++)
    {
        if(!vis[arr1[i][j]])
        {
            arr2[i].pb(arr1[i][j]);
            dfs(arr1[i][j]);
        }
    }
}
void dfs1(ll i ,ll cnt,ll k,ll arr[],ll flag)
{
    if(cnt>k)
        return;
    if(arr2[i].size()==0 && cnt<=k)
        ans++;
    if(arr2[i].size()==0)
        return;
    for(ll j=0;j<arr2[i].size();j++)
    {
        if(arr[arr2[i][j]]==1)
        {
            if(flag==1)
            {
                dfs1(arr2[i][j],cnt+1,k,arr,1);
            }
            else
            {
                dfs1(arr2[i][j],1,k,arr,1);
            }
        }
        else
        {
            dfs1(arr2[i][j],0,k,arr,0);
        }
    }
}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll arr[n+1];
    for(ll i=1;i<n+1;i++)
        cin>>arr[i];
    for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr1[a].pb(b);
        arr1[b].pb(a);
    }
    dfs(1);
    ll cnt=0,flag=0;
    if(arr[1]==1)
    {
        cnt++;
        flag++;
    }
    dfs1(1,cnt,k,arr,flag);
    /*for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<arr2[i].size();j++)
            cout<<arr2[i][j]<<" ";
        cout<<endl;
    }*/
    cout<<ans;
}
