#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
       long long a,b,k;
       cin>>a>>b>>k;
       if(k%2==0)
       {
           cout<<(a-b)*k/2<<endl;
           continue;
       }
       else
       {
           k--;
           cout<<(a-b)*k/2 + a<<endl;
           continue;
       }
   }
}
