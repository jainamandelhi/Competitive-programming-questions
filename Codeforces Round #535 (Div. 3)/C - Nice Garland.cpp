#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    ll n;
    cin>>n;
    string s,s1="",str;
    cin>>s;
    ll maxi=INT_MAX,ans=0;
    string t[6]={"BRG","GRB","BGR","GBR","RGB","RBG"};
    for(ll i=0;i<6;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(t[i][j%3]!=s[j])
                ans++;
            s1.pb(t[i][j%3]);
        }
        if(ans<maxi)
        {
            maxi=ans;
            str=s1;
        }
        s1="";
        ans=0;
    }
    cout<<maxi<<endl;
    cout<<str;
    return 0;
}
