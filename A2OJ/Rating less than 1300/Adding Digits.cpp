#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string a,b;
   stringstream ss;
   int n;
   cin>>a>>b>>n;
   int ai=atoi(a.c_str());
   int bi=atoi(b.c_str());
   int flag=0;
   for(int i=0;i<10;i++)
   {
       if((ai*10+i)%bi==0)
       {
           flag=1;
           ss<<i;
           a+=ss.str();
           break;
       }
   }
   if(flag==0)
   {
       cout<<-1;
       return 0;
   }
   cout<<a;
   for(int i=0;i<n-1;i++)
        cout<<0;
}
