#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr;
    long long sum=0;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
        if(i==0 && arr[i]==1)
            continue;
        if(i==0)
            sum+=a-1;
        else
        {
            if(arr[i]<arr[i-1])
                sum+=n-arr[i-1]+arr[i];
            else
                sum+=arr[i]-arr[i-1];
        }
    }
    cout<<sum;
    return 0;
}
