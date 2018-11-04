#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>arr(1000001);
    for(int i=2;i<=sqrt(1000000);i++)
    {
        for(int j=2;j*i<=1000001;j++)
        {
            arr[j*i]++;
        }
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        if(sqrt(a)!=floor(sqrt(a)) || a==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            if(arr[sqrt(a)])
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
                cout<<"YES"<<endl;
        }
    }
}
