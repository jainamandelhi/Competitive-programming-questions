#include<bits/stdc++.h>
using namespace std;
int n,x;
int bs( int arr1[],int first,int last,int p,int j)
{
    int mid=(first+last)/2;
    if(first>last)
        return 0;
    if(arr1[mid]==p && j!=mid)
        return 1;
    if(arr1[mid]==p && mid-1 >= 0 && arr1[mid-1] == p)return 1;
    if(arr1[mid]==p && mid+1 < n && arr1[mid+1] == p)return 1;
    else if(p<arr1[mid])
        return bs(arr1,first,mid-1,p,j);
    else
        return bs(arr1,mid+1,last,p,j);
}
int main()
{
cin>>n>>x;
int *arr=new int[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
for(int i=0;i<n-1;i++)
{
    if(arr[i]==arr[i+1])
    {
        cout<<0;
        return 0;
    }
}
for(int i=0;i<n;i++)
{
    int k=bs(arr,0,n-1,arr[i]&x,i);
        if(k)
    {
        cout<<1;
        return 0;
    }
}
for(int i=0;i<n;i++)
    arr[i]=arr[i]&x;
    sort(arr,arr+n);
for(int i=0;i<n-1;i++)
{
    if(arr[i]==arr[i+1])
    {
        cout<<2;
        return 0;
    }
}
cout<<-1;
return 0;
}
