#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(n+1);
    for(ll i=1;i<=n;i++)
        arr[i]=i;
    vector<ll>arr1;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        arr1.pb(a);
        arr1.pb(b);
        arr[a]=min(arr[a],arr[b]);
        arr[b]=arr[a];
    }
    for(ll i=0;i<arr1.size();i=i+2)
    {
        ll a=arr1[i];
        ll b=arr1[i+1];
        arr[a]=min(arr[a],arr[b]);
        arr[b]=arr[a];
    }
    vector<ll>cnt(n+1);
    for(ll i=1;i<=n;i++)
    {
        ll temp=0;
        for(ll j=1;j<=arr.size();j++)
        {
            if(arr[j]==i)
                temp++;
            if(temp>3)
            {
                cout<<-1;
                return 0;
            }
        }
        cnt[i]=temp;
    }
    for(ll i=1;i<=n;i++)
    {
        if(cnt[i]==0)
            continue;
        if(cnt[i]==2)
        {
            for(ll j=1;j<=n;j++)
            {
                if(cnt[j]==1)
                {
                    cnt[j]=0;
                    arr[j]=i;
                    cnt[i]++;
                    break;
                }
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(cnt[i]==1)
            arr[i]=-1;
    }
    for(ll i=1;i<=n;i++)
    {
        if(cnt[i]==2)
        {
            cout<<-1;
            return 0;
        }
    }
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(arr[j]==i)
                cout<<j<<" ";
        }
        if(arr[i]!=0 && arr[i]!=-1)
        cout<<endl;
    }
    ll maxi=0;
    for(ll i=1;i<=n;i++)
    {
        if(arr[i]==-1)
        {
            cout<<i<<" ";
            maxi++;
        }
        if(maxi==3){
            cout<<endl;
            maxi=0;
        }
    }

/*







    vector<pair<ll,ll> >arr2;
    for(ll i=1;i<arr.size();i++)
    {
        arr2.pb(mp(arr[i],i));
    }
    sort(arr2.begin(),arr2.end());
    ll i=0,j=arr2.size()-1;
    ll maxi=1;
    while(i<arr2.size())
    {

    }
    ll maxi=1;
    vector<int>ans(n+1);
    for(ll i=0;i<arr2.size()-1;i++)
    {
        if(arr2[i].first==arr2[i+1].first){
            maxi++;
        }
        else
        {

            if(maxi>3)
            {
                cout<<-1;
                return 0;
            }
            maxi=1;
        }
    }*/
}
