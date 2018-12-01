#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,s;
   cin>>n>>s;
   if(n>s){
    cout<<1;
    return 0;
   }
   if(s%n==0)
    cout<<setprecision(9)<<s/n;
   else
    cout<<setprecision(9)<<floor(s/n)+1;
}
