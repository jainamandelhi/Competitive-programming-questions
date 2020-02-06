#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll int
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
ll flag=0;
void dfs(ll &a, ll &b, vector<ll>&temp, ll vis[],
         vector<vector<ll> >&arr)
{
    if(flag)
        return;
    //cout<<a<<endl;
    temp.pb(a);
    if(a==b){
    //for(ll j=0;j<temp1.size();j++)
    //    cout<<temp[j]<<" ";
    //cout<<endl;
        flag=1;
        return;
    }
    vis[a]=1;
    for(ll i=0;i<arr[a].size();i++)
    {
        if(flag)
            return;
        if(vis[arr[a][i]]==1)
            continue;
        dfs(arr[a][i],b,temp,vis,arr);
        if(!flag)
            temp.pop_back();
    }
}
ll ans[5001][5001]={0};
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll n;
	scanf("%d",&n);
    ll u1[n-1],u2[n-1];
	vector<vector<ll> >arr(5001);

	for(ll i=0;i<n-1;i++)
    {
        ll a,b;
        scanf("%d%d",&a,&b);
        arr[a].pb(b);
        arr[b].pb(a);
        u1[i]=a;
        u2[i]=b;
    }
    ll m;
    scanf("%d",&m);
    ll q1[m],q2[m],q3[m];
    //vector<tuple<ll,ll,ll> >v;
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        q1[i]=a;
        q2[i]=b;
        q3[i]=c;
    }
    vector<vector<ll> >d;
    for(ll i=0;i<m;i++)
    {

        ll a,b,c;
        a=q1[i];
        b=q2[i];
        c=q3[i];
        ll vis[50001]={0};
        vector<ll>temp1;
        flag=0;
        dfs(a,b,temp1,vis,arr);
        for(ll j=0;j<temp1.size()-1;j++)
        {
            //cout<<temp1[j]<<" ";
            ans[temp1[j]][temp1[j+1]]=max(ans[temp1[j]][temp1[j+1]],c);
            ans[temp1[j+1]][temp1[j]]=max(ans[temp1[j+1]][temp1[j]],c);
            //cout<<ans[mp(temp1[j],temp1[j+1])]<<" ";
        }
        d.pb(temp1);
      // cout<<endl;
    }
    //cout<<endl;
    for(ll i=0;i<d.size();i++)
    {
        ll flag=0,c=q3[i];
        for(ll j=0;j<d[i].size()-1;j++)
        {
            //cout<<temp1[j]<<" ";
            if(ans[d[i][j]][d[i][j+1]]==c
               || ans[d[i][j+1]][d[i][j]]==c){
                flag=1;
                break;
               }
        }
        if(flag==0)
        {
            cout<<-1;
            return 0;
        }
       // cout<<endl;
    }
    for(ll i=0;i<n-1;i++)
    {
        if(ans[u1[i]][u2[i]]==0)
            ans[u1[i]][u2[i]]=1000000;
        ll a=ans[u1[i]][u2[i]];
        printf("%d ",a);
    }
    return 0;
}
