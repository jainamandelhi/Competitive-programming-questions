#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int main()
{
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int count1=0,maxi=0,index=-1;
    for(int i=0;i<n;i++)
    {
        while(arr[i]>0)
        {
            arr[i]-=m;
            count1++;
        }
        arr[i]=count1;
        if(count1>=maxi)
        {
            maxi=count1;
            index=i;
        }
        count1=0;
    }
    cout<<index+1;
    return 0;
}
