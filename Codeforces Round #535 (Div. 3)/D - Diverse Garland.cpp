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
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=1;i<n-1;i++)
    {
        if(s[i]==s[i-1])
        {
            ans++;
            if(s[i]==s[i+1])
            {
                if(s[i]=='R')
                {
                    s[i]='G';
                    continue;
                }
                if(s[i]=='G')
                {
                    s[i]='B';
                    continue;
                }
                if(s[i]=='B')
                {
                    s[i]='R';
                    continue;
                }
            }
            else
            {
                if(s[i-1]!='R' && s[i+1]!='R')
                {
                    s[i]='R';
                    continue;
                }
                if(s[i-1]!='G' && s[i+1]!='G')
                {
                    s[i]='G';
                    continue;
                }
                if(s[i-1]!='B' && s[i+1]!='B')
                {
                    s[i]='B';
                    continue;
                }
            }
        }
    }
    if(s[n-1]==s[n-2])
    {
        if(s[n-1]=='G')
            s[n-1]='R';
        else if(s[n-1]='B')
            s[n-1]='G';
        else if(s[n-1]='R')
            s[n-1]='B';
        ans++;
    }
    cout<<ans<<endl;
    cout<<s;
    return 0;
}
