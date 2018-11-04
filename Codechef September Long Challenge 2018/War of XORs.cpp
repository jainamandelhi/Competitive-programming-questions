#include <bits/stdc++.h>
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
        int total=0,flag;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]%2==0)
                flag=0;
            else
                flag=1;
            for(int j=i+1;j<n;j++)
            {
                int a=arr[i]^arr[j];
                if(flag==0 && arr[j]%2==0 && a>2)
                    total++;
                else if(flag==1 && arr[j]%2!=0 && a>2)
                    total++;
                   // cout<<total<<" ";
            }
         //   cout<<endl;
        }
        cout<<total<<endl;
    }
	return 0;
}
