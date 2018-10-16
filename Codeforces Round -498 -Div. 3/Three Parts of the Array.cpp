#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin>>n;
    i=0;
    j=n-1;
    vector<long long>arr(n);
    for(int k=0;k<n;k++)
        cin>>arr[k];
    long long sum1=arr[0],sum2=arr[n-1],ans=0;
    if(n == 1){
        cout << "0";
        return 0;
    }
    if(sum1==sum2)
        ans=sum1;
    while(i<j)
    {
        if(sum1<sum2)
        {
            i++;
            sum1+=arr[i];
        }
        else if(sum2<sum1)
        {
            j--;
            sum2+=arr[j];
        }
        else
        {
            ans=sum1;
            i++;
            j--;
            sum1+=arr[i];
            sum2+=arr[j];
        }
    }
    cout<<ans;
    return 0;
}
