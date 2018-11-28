#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];int arr1[10002]={0};
   for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr1[arr[i]]++;
    }
    sort(arr1,arr1+10002,greater<int>());
    if(arr1[0]>(n+1)/2)
        cout<<"NO";
    else
        cout<<"YES";
}
