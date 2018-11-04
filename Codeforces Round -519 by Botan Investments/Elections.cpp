#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=-1,sum1=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maxi)
            maxi=arr[i];
        sum1+=arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
        sum=sum+maxi-arr[i];
    if(sum>sum1)
        cout<<maxi;
    else
        cout<<(sum1-sum)/n + 1 + maxi;
}
