#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,count1=0,flag=0;
    cin>>n;
    long long *arr=new long long[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long maxi=0;
    for(long long i=0;i<n-1;i++)
    {
        long long a=arr[i]*2;
        if(a>=arr[i+1])
        {
            count1++;
        }
        else
        {
            if(count1>maxi)
                maxi=count1;
            count1=0;
        }
    }
    if(count1>maxi)
                maxi=count1;
    cout<<maxi+1;
	return 0;
}
