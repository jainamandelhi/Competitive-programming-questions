#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++)
        cin>>arr[i];
    sort(arr,arr+12,greater<int>());
    int sum=0,total=0;
    for(int i=0;i<12;i++)
    {
        if(sum<k)
            total++;
        else
            break;
        sum+=arr[i];
    }
    if(sum<k)
    {
        cout<<-1;
        return 0;
    }
    cout<<total;
    return 0;
}
