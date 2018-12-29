#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k>n)
    {
        cout<<"NO";
        return 0;
    }
    vector<ll>ans;
    ll y;
    for(y=30;y>=0;y--)
    {
        if(pow(2,y)>n)
            continue;
        while(pow(2,y)<=n)
        {
            ans.pb(pow(2,y));
            n-=pow(2,y);
        }
    }
   // cout<<ans.size()<<endl;
    if(ans.size()>k)
    {
        cout<<"NO";
        return 0;
    }
    ll i=0;
    while(ans.size()<k)
    {
        //cout<<ans.size()<<endl;
        while(ans[i]==1)
            i++;
        ans[i]/=2;
        ans.pb(ans[i]);
    }
    cout<<"YES"<<endl;
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
}

