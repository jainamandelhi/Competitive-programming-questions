#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n,m,d;
    cin>>n>>m>>d;
    ll arr[m];
    for(ll i=0;i<m;i++)
        cin>>arr[i];
    vector<ll>ans;
    ans.pb(0);
    ll j=0;
    for(ll i=0;i<m-1;i++)
    {
        ans.pb(j+arr[i]);
        j+=arr[i];
    }
    j=0;
    if(arr[m-1]+ans[m-1]>n)
    {
        cout<<"NO";
        return 0;
    }
    if(arr[m-1]+ans[m-1]+d-1>=n)
    {
        cout<<"YES"<<endl;
        ll ans1[n];
        for(ll i=0;i<n;i++)
            ans1[i]=0;
        ll k=1;
        for(ll i=0;i<m;i++)
        {
            for(ll p=ans[i];p<arr[i]+ans[i];p++)
            {
                ans1[p]=k;
            }
            k++;
        }
        for(ll i=0;i<n;i++)
            cout<<ans1[i]<<" ";
        return 0;
    }
    //cout<<1;
    ll p=arr[m-1]+ans[m-1];
    p=n-p;
    if(d>1)
    {
        if(p%(d-1)==0)
            p=p/(d-1);
        else
            p=p/(d-1)+1;
    }
    //cout<<1;
    //cout<<p;
    if(p>m+1 || d==1)
    {
        cout<<"NO";
        return 0;
    }
    if(p%(d-1)!=0)
        p--;
    cout<<"YES"<<endl;
    j=0;
    //for(ll i=0;i<m;i++)
    //    cout<<ans[i]<<" ";
    //cout<<endl;
    while(p--)
    {
        if(j!=0)
        {
            ans[j]=ans[j-1]+arr[j-1]+d-1;
            j++;
            continue;
        }
        ans[j]=ans[j]+d-1;
        j++;
    }
    j=1;
    //for(ll i=0;i<m;i++)
    //    cout<<ans[i]<<" ";
    //cout<<endl;
    ll ans1[n];
    for(ll i=0;i<n;i++)
        ans1[i]=0;
    ll k=1;
    ll maxi=0;
    for(ll i=0;i<m;i++)
    {
        if(i>0)
            ans[i]=max(ans[i-1]+arr[i-1],ans[i]);
        for(p=ans[i];p<arr[i]+ans[i];p++)
        {
            ans1[p]=k;
        }
        k++;
    }
    for(ll i=0;i<n;i++)
        cout<<ans1[i]<<" ";
}
