#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
    ll n,ans;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    if(m.size()==1)
    {
        cout<<(((n)*(n+1))/2)%998244353;
        return 0;
    }
    ll st=0,en=n-1;
    ll i=0;
    while(s[i]==s[0])
        i++;
    st=i-1;
    i=n-1;
    while(s[i]==s[n-1])
        i--;
    en=i+1;
    if(s[0]==s[n-1])
    {
        ans=(n-en+1)*(st+2);
        cout<<ans%998244353;
        return 0;
    }
    ans=st+2+n-en;
    cout<<ans%998244353;
    return 0;
}
