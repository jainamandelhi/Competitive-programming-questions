#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   int *arr=new int[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
   for(int i=k-1;i<n-1;i++)
   {
       if(arr[i]!=arr[i+1])
       {
           cout<<-1;
           return 0;
       }
   }
   for(int i=k-2;i>=0;i--)
   {
       if(arr[i]!=arr[k-1])
       {
           cout<<i+1;
           return 0;
       }
   }
   cout<<0;
}
