#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    ll n,k,u=0;
    cin>>n>>k;
    vector<int>arr(5002);
    vector<pair<ll,ll> >p,p1;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        arr[a]++;
        if(arr[a]>u)
            u=arr[a];
        p.pb(mp(a,i));
    }
    if(u>k)
    {
        cout<<"NO";
        return 0;
    }
    int flag=1;
    ll ans1=1,ans2=k;
    sort(p.begin(),p.end());
    for(ll i=0;i<n;i++)
    {
        if(flag==1)
        {
            p1.pb(mp(p[i].second,ans1));
            ans1++;
            if(ans1>k)
                ans1=1;
            if(i+1<n && p[i].first==p[i+1].first)
                continue;
            else
                flag=-1;
        }
        else if(flag==-1)
        {
            p1.pb(mp(p[i].second,ans2));
            ans2--;
            if(ans2<1)
                ans2=k;
            if(i+1<n && p[i].first==p[i+1].first)
                continue;
            else
                flag=1;
        }
    }
    sort(p1.begin(),p1.end());
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)
        cout<<p1[i].second<<" ";
    return 0;
}
