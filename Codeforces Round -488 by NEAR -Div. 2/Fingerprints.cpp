#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>arr1(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    arr1[i]=10;
    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k)
            {
                arr1[i]=k;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr1[i]==10)
        continue;
        cout<<arr1[i]<<" ";
    }
    return 0;
}
