#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    if(n%2!=0)
    {
        cout<<-1;
        return 0;
    }
    else if(n==2)
    {
        cout<<2<<" "<<1;
        return 0;
    }
    else
    {
        arr[0]=2;
        arr[1]=1;
        for(int i=0;i<n-2;i++)
            arr[i+2]=arr[i]+2;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
