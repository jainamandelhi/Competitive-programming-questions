#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr.begin(),arr.end());
	int time=0,flag=1,i=0;
	while(flag)
	{
	    if(arr[i]!=0)
	    {
	        time++;
	        if(arr[i]==arr[i+1])
	        {
                while(arr[i]==arr[i+1]&&i<n)
                {
                    i++;
                }
	        }
	        arr[i]=0;
	        i++;
	    }
	    else
	    i++;
	    if(arr[n-1]==0)
	    flag=0;
	}
	cout<<time;
	return 0;
}
