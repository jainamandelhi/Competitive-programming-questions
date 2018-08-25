#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int *arr=new int[n];
        vector<int>arr1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
            arr1.push_back(arr[i]-arr[i-1]);
        sort(arr1.begin(),arr1.end());
        cout<<arr1[0]<<endl;
    }
    return 0;
}
