#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long s;
    cin>>s;
    vector<long long>arr;
    for(long long i=0;i<n;i++)
    {
        long long a;
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    long long j;
    long long flag=1;
    if(s<arr[0])
    {
        j=0;
        flag=0;
    }
    else if(s>arr[n-1])
    {
        j=n-1;
        flag=2;
    }
    else
    {
        for(long long i=0;i<n;i++)
        {
            if(arr[i]==s)
            {
                j=i;
                break;
            }
            if(arr[i]>s && i>n/2)
            {
                j=i;
                break;
            }
            else if(arr[i]>s && i<n/2)
            {
                j=i-1;
                break;
            }
        }
    }
   // cout<<j<<" ";
    n/=2;
  //  cout<<n<<" ";
    long long total=0;
    while(n!=j)
    {
        if(j>n)
        {
            total+=(abs(s-arr[n]));
            n++;
        }
        if(j<n)
        {
            total+=(abs(s-arr[n]));
            n--;
        }
    }
    if(flag==2 || flag==0)
        total+=abs(s-arr[j]);
    cout<<total;
    return 0;
}
