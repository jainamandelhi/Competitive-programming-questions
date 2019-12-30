#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=0;
    ans+=min(a,min(b,c));
    if(ans==0)
    {
        cout<<a/3+b/3+c/3;
        return 0;
    }
    ans--;
   // cout<<ans<<endl;
    a=a-ans;
    b=b-ans;
    c=c-ans;
    //cout<<a<<" "<<b<<" "<<c<<endl;
    ans=ans+a/3;
    a=a-3*(a/3);
    ans=ans+b/3;
    b=b-3*(b/3);
    ans=ans+c/3;
    c=c-3*(c/3);
    //7cout<<a<<" "<<b<<" "<<c<<endl;
    ans+=min(a,min(b,c));
    cout<<ans;
}
