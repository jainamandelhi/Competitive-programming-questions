#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,min=101,max=0,max_index,min_index;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
   {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
            max_index=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            min_index=i;
        }
   }
   if(max_index>min_index)
        cout<<max_index+(n-min_index-1)-1;
   else if(min_index>max_index)
        cout<<max_index+(n-min_index-1);
    return 0;
}
