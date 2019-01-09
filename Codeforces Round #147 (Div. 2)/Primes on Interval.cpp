#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
vector<bool>visited(5);
void fun(vector<vector<int> >adj,int a,int b,int &total)
{
    visited[a]=true;
    if(a==b)
        total++;
    else
    {
        for(int i=0;i<adj[a].size();i++)
            if(visited[adj[a][i]]==false)
                fun(adj,adj[a][i],b,total);
    }
    visited[a]=false;
}
int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    vector<int>arr(b+1);
    for(int i=2;i*2<=b;i++)
    {
        for(int j=2;j*i<=b;j++)
            arr[i*j]++;
    }
    arr[1]++;
    vector<int>ans;
    for(int i=a;i<=b;i++)
        if(arr[i]==0)
            ans.pb(i);

    if(ans.size()<k)
    {
        cout<<-1;
        return 0;
    }
    int ansn=-1;
    for(int i=k;i<ans.size();i++)
        ansn=max(ansn,ans[i]-ans[i-k]);
    ansn=max(ans[k-1]-a+1,ansn);
    ansn=max(b-ans[ans.size()-k]+1,ansn);
    cout<<ansn;
}
