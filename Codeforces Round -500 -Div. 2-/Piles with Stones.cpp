#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    vector<int>arr(n);
    vector<int>arr1(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
    {
        if(arr1[i]>arr[i])
            count1+=arr1[i]-arr[i];
        else if(arr[i]>arr1[i])
            count2+=arr[i]-arr1[i];
    }
    if(count1>count2)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
