#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    ll n=a.size();
    ll m=b.size();
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    ll flag=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]-'0'==1)
            flag=1;
    }
    if(flag==0)
    {
        cout<<"NO";
        return 0;
    }
    flag=0;
    for(ll i=0;i<n;i++)
    {
        if(b[i]-'0'==1)
            flag=1;
    }
    if(flag==0)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}
