#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    int *l=new int[n];
    int *r=new int[n];
    for(int i=0;i<n;i++)
        cin>>l[i];
    for(int i=0;i<n;i++)
        cin>>r[i];
    for(int i=0;i<n;i++)
        arr[i]=n-l[i]-r[i];
    for(int i=0;i<n;i++)
    {
        int cntl=0,cntr=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
                cntr++;
        }
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>arr[i])
                cntl++;
        }
        if(cntl!=l[i] || cntr!=r[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
