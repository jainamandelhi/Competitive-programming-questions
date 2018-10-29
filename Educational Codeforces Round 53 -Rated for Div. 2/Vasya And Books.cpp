#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxi=0;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        if(m[arr1[i]]<maxi)
        {
            cout<<0<<" ";
            continue;
        }
        else
        {
            cout<<m[arr1[i]]-maxi<<" ";
            maxi=m[arr1[i]];
        }
    }
    return 0;
}
