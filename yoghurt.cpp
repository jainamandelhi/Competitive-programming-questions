#include <bits/stdc++.h>

using namespace std;


int main()
{
  //  freopen("A-large.in","r",stdin);
    //freopen("output5.out","w",stdout);
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n,p;
        cin>>n>>p;
        long long *arr=new long long[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        long long day=1,count1=0;
        for(int itr=0;itr<n;)
        {
            if(itr<n && arr[itr]>=day)
            {
                for(int h=0;h<p;h++)
                {
                    if(itr<n)
                    {
                        count1++;
                    }
                    itr++;
                }
                day++;
            }
            else itr++;
        }
        cout<<"Case #"<<k+1<<": "<<count1<<endl;
    }
}
