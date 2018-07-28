#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int arr[3];
        int x,y;
        for(int i=0;i<3;i++)
        {
            int a;
            cin>>a;
            arr[i]=a;
        }
        cin>>x>>y;
        sort(arr,arr+3);
        if(arr[0]>x || arr[0]>y)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(arr[0]+arr[1]+arr[2]==x+y)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
