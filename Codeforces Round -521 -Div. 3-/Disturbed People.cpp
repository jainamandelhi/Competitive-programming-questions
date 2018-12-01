#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
        if(k>=2)
        {
            if(arr[k]==1 && arr[k-1]==0 && arr[k-2]==1)
            {
                arr[k]=0;
                i++;
            }
        }
    }
    cout<<i;
}
