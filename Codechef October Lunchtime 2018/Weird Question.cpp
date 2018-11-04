#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long cnt[1000000]={0};

        //vector<long long>cnt(1000001);
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        sort(arr,arr+n);
        long long total=0;
        for(long long i=0;i<n;i++)
            for(long long j=i;j<n;j++)
            {
                if(i>0 && arr[i]==arr[i-1])
                    break;
                if(j>0 && arr[j]==arr[j-1])
                    continue;
                if(cnt[arr[i]]>=arr[j] && cnt[arr[j]]>=arr[i])
                {
                    if(i==j)
                        total++;
                    else
                        total+=2;
                }
            }
        cout<<total<<endl;
    }
    return 0;
}
