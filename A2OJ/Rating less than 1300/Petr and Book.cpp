#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++)
        cin>>arr[i];
    int sum1=0;
    int i=0;
    while(sum1<n)
    {
        sum1+=arr[i];
        i++;
        if(i==7)
            i=0;
    }
    if(i==0)
        cout<<7;
    else
    cout<<i;
}
