#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    float avg;
    avg=sum/n;
    int i=0;
    while(avg<4.5)
    {
        sum=sum-arr[i]+5;
        avg=sum/n;
        i++;
    }
    cout<<i;
    return 0;
}
