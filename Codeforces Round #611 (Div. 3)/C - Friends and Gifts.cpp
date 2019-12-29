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
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    vector<ll>khali,bache;
    for(ll i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            khali.pb(i);
        }
    }
    vector<ll>arr1(n);
    for(ll i=0;i<n;i++)
    {
        if(arr[i]!=0)
           arr1[arr[i]-1]++;
    }
    for(ll i=0;i<n;i++)
    {
        if(arr1[i]==0)
            bache.pb(i);
    }
    map<ll,ll>m1,m2;
    for(ll i=0;i<khali.size();i++)
        m1[khali[i]]++;
    for(ll i=0;i<bache.size();i++)
        m2[bache[i]]++;
    ll j=0;
    for(ll i=0;i<khali.size();i++)
    {
        if(m2[khali[i]]>0)
        {
            while(khali[i]==bache[j] || m2[bache[j]]==0)
            {
                j++;
                if(j==n)
                    j=0;
            }
            arr[khali[i]]=bache[j]+1;
            m2[bache[j]]--;
            m1[khali[i]]--;
        }
    }
    j=0;
    //for(ll i=0;i<n;i++)
    //    cout<<arr[i]<<" ";
    for(ll i=0;i<khali.size();i++)
    {
        //cout<<khali[i]<<" "<<m1[khali[i]]<<endl;
        if(m1[khali[i]]>0)
        {
            while(m2[bache[j]]==0)
            {
                j++;
                if(j==n)
                    j=0;
            }
            arr[khali[i]]=bache[j]+1;
            m2[bache[j]]--;
            m1[khali[i]]--;
        }
    }
    for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
