#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int *arr=new int[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    int *arr1=new int[m-n+1];
    for(int i=0;i<m-n+1;i++)
        arr1[i]=arr[i+n-1]-arr[i];
    sort(arr1,arr1+m-n+1);
    cout<<arr1[0];
	return 0;
}
