#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int flag=0;
    long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
        if(i)
            if(arr[i]<=arr[i-1])
                flag=1;
    }
    if(flag==0)
    {
        cout<<0;
        return 0;
    }
    cout<<n+1<<endl;
    cout<<"1 "<<n<<" 100000"<<endl;
    for(int i=0;i<n;i++)
        cout<<"2 "<<i+1<<" "<<arr[i]+100000-i<<endl;
    return 0;
}
