#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    vector<long long>arr,arr1;
    long long c=a+b;
    long long ans=(-1+sqrt(1+8*c))/2;
    for(long long i=ans;i>=1;i--)
    {
        if(a-i>=0)
        {
            arr.push_back(i);
            a-=i;
        }
        else if(b-i>=0)
        {
            arr1.push_back(i);
            b-=i;
        }
    }
    cout<<arr.size()<<endl;
    for(long long i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<arr1.size()<<endl;
    for(long long i=0;i<arr1.size();i++)
        cout<<arr1[i]<<" ";
}
