#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;
int main()
{
   ll n;
   cin>>n;
   ll i=1;
   ll j=n*n;
   n/=2;
   while(i<j)
   {
       for(ll k=0;k<n;k++)
       {
           cout<<i<<" ";
           i++;
           cout<<j<<" ";
           j--;
       }
       cout<<endl;
   }
}
