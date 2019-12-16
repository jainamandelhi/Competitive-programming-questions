#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
#define mod 1000000007
int main()
{
    string s;
    cin>>s;
    ll t;
    cin>>t;
    ll n=s.size();
    ll arr[n];
    arr[0]=0;
    for(ll i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            arr[i]=1+arr[i-1];
        }
        else
        {
            arr[i]=arr[i-1];
        }
    }
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        if(a==0)
        {
            cout<<arr[b];
        }
        else
        {
            cout<<arr[b]-arr[a];
        }
        cout<<endl;
    }
}
