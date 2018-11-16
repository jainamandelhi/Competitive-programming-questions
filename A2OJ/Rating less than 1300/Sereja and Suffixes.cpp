#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   vector<int>arr(n);
   int arr1[100001]={0};
   vector<int>arr2(n);
   for(int i=0;i<n;i++)
        cin>>arr[i];
    arr2[n-1]=1;
    arr1[arr[n-1]]++;
   for(int i=n-2;i>=0;i--)
   {
        if(arr1[arr[i]])
        {
            arr2[i]=arr2[i+1];
        }
        else
        {
            arr2[i]=arr2[i+1]+1;
            arr1[arr[i]]++;
        }
   }
   for(int i=0;i<m;i++)
   {
       int a;
       cin>>a;
       cout<<arr2[a-1]<<endl;
   }
}
