#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
        cin>>arr[i];
    int mt=0,mun=0,a=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            a++;
            mun--;
            if(mun<0)
                mun=0;
        }
        else
        {
            flag=1;
            mun++;
            if(mun>mt)
                mt=mun;
        }
    }
    if(flag)
        cout<<mt+a;
    else
        cout<<n-1;
}
