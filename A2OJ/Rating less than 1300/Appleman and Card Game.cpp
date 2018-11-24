#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,k;
   long long sum=0;
   cin>>n>>k;
   string s;
   cin>>s;
   long long arr[27]={0};
   for(long long i=0;i<n;i++)
   {
       arr[s[i]-65]++;
   }
   sort(arr,arr+27,greater<long long>());
   //for(long long i=0;i<27;i++)
   //     cout<<arr[i]<<" ";
  // cout<<endl;
   for(long long i=0;i<27;i++)
   {
        long long maxi;
        maxi=min(arr[i],k);
        sum+=maxi*maxi;
        k-=maxi;
        if(k<=0)
            break;
   }
   cout<<sum;
}
