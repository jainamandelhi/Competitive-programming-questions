#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>m>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
	int min=0,cnt=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
    {
        cnt+=arr[i];
        if(m>=cnt)
            min+=(arr[i]*(arr[i]+1))/2;
        else
        {
            min+=(arr[i]*(arr[i]+1))/2-((cnt-m)*(cnt-m+1))/2;
        }
        if(cnt>=m)
            break;
    }
    int max=0;
    for(int i=0;i<m;i++)
    {
        sort(arr,arr+n);
        max+=arr[n-1];
        arr[n-1]--;
    }
    cout<<max<<" "<<min;
    return 0;
}
