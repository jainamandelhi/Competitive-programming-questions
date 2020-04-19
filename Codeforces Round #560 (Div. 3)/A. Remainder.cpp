#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
int main()
{
   ll n,x,y;
   cin>>n>>x>>y;
   string s;
   cin>>s;
   ll ans=0;
   ll i=n-1;
   for(i=n-1;i>=n-y;i--)
   {
       if(y<=0)
        break;
       if(s[i]=='1')
       {
           s[i]='0';
           ans++;
       }
   }
   if(s[i]=='0')
   {
       s[i]='1';
       ans++;
   }
   i--;
   for(ll j=0;j<x-y-1;j++)
   {
       if(s[i]=='1'){
        ans++;
        s[i]='0';
       }
        i--;
   }
 //  cout<<s<<endl;
   cout<<ans;
}
