#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=1,flag=1;
    cin>>n;
    while(flag)
    {
        int arr[10]={0};
        m=n+i;
        for(int j=0;j<4;j++)
    {
        arr[m%10]++;
        m=m/10;
    }
        sort(arr,arr+10);
        if(arr[9]==1)
            flag=0;
        i++;
    }
    cout<<n+i-1;
    return 0;
}
