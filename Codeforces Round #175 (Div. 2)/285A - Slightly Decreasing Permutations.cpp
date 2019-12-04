#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
   ll n;
   ll k;
   cin>>n>>k;
   while(k--)
   {
       cout<<n<<" ";
       n--;
   }
   for(ll i=1;i<=n;i++)
    cout<<i<<" ";
}
