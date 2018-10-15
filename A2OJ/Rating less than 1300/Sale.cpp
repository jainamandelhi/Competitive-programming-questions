#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]*=(-1);
    }
    sort(arr,arr+n,greater<int>());
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
            break;
        sum+=arr[i];
    }
    cout<<sum;
	return 0;
}
