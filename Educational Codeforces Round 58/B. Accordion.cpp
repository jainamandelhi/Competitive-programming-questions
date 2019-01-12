#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
using namespace std;
struct node{
    char data;
    node *next;
};
int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll i=0;
    string s1="";
    for(i=0;i<n;i++)
    {
        if(s[i]=='['){
            s1.pb(s[i]);
            break;
        }
    }
    if(i==n)
    {
        cout<<-1;
        return 0;
    }
    ll j=i;
    for(j=i+1;j<n;j++)
    {
        if(s[j]==':'){
            s1.pb(s[i]);
            break;
        }
    }
    if(j==n)
    {
        cout<<-1;
        return 0;
    }
    for(i=n-1;i>j;i--)
    {
        if(s[i]==']')
            break;
    }
    if(i<=j)
    {
        cout<<-1;
        return 0;
    }
    i--;
    while(i>j && s[i]!=':')
        i--;
    if(i<=j)
    {
        cout<<-1;
        return 0;
    }
    //cout<<j<<" "<<i<<endl;
    for(ll k=j+1;k<i;k++)
    {
        if(s[k]!='|')
            continue;
        else
            s1.pb(s[k]);
    }
    cout<<s1.size()+2;
    return 0;
}
