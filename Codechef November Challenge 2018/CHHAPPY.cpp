#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int n,c=0,flag=0;
        cin>>n;
        int arr[n];
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v[arr[i]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            if(v[i]>1)
            {
                vector<int>v1(n+1);
                flag=0;
                c=0;
                for(int j=0;j<n;j++)
                {
                    if(arr[j]==i && v[j+1])
                    {
                        if(v1[j+1])
                        {
                            flag=1;
                            break;
                        }
                        v1[j+1]++;
                        c++;
                        if(c>1)
                        {
                            cout<<"Truly Happy"<<endl;
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag)
                    break;
            }
        }
        if(!flag)
            cout<<"Poor Chef"<<endl;
    }
}
