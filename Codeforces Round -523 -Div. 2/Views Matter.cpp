
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m1,sum=0,l=-1,c=0,m2=0;
   cin>>n>>m1;
   long long arr[n];
   for(long long i=0;i<n;i++){
        cin>>arr[i];
   }
    if(n==1)
    {
        cout<<0;
        return 0;
    }
   sort(arr,arr+n);
   for(long long i=0;i<n;i++)
   {
       if(arr[i]>c && i!=n-1)
       {
           c++;
           sum+=arr[i]-1;
       }
       else if(i!=n-1)
            sum+=arr[i]-1;
       else
            sum+=c;
   }
   if(c==arr[n-1])
        sum--;
   cout<<sum;
}
