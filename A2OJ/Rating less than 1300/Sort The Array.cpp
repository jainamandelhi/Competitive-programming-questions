#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,flag=0,a=0,b=0,aele,bele;
   cin>>n;
   long long arr[n];
   for(long long i=0;i<n;i++)
   {
       cin>>arr[i];
       if(i>0)
       {
           if(arr[i]<arr[i-1] && flag==0)
           {
               flag=1;
               a=i-1;
               aele=arr[i-1];
           }
           if(arr[i]>arr[i-1] && flag==1)
           {
               flag=-1;
               b=i-1;
               bele=arr[i];
               if(bele<aele)
               {
                   cout<<"no";
                   return 0;
               }
           }
           if(arr[i]<arr[i-1] && flag==-1)
           {
               cout<<"no";
               return 0;
           }
       }
   }
   if(flag==1 && b==0)
        b=n-1;
    if(a>0 && arr[a-1]>arr[b])
   {
       cout<<"no";
       return 0;
   }
   cout<<"yes"<<endl;
   cout<<a+1<<" "<<b+1;
}
