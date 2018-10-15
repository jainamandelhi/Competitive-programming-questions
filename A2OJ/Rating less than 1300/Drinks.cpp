#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
        cin>>arr[i];
    vector<int>arr1(arr[4]+1,0);
    for(int i=0;i<5;i++)
    {
        for(int j=arr[i];j<=arr[4];j=j+arr[i])
            arr1[j]++;
    }
    int count=0;
    for(int i=0;i<=arr[4];i++)
    {
        if(arr1[i]!=0)
            count++;
    }
    cout<<count;
return 0;
}
