#include <bits/stdc++.h>
using namespace std;
bool srt(pair<long long,long long>a, pair<long long,long long>b)
{
    return a.first>b.first;
}
int main() {
    long long n,m,sum=0,count=0;
    cin>>n>>m;
    vector<pair<long long, long long> >arr;
    vector<pair<long long, long long> >arr1;
    for(long long i=0;i<n;i++)
        {
            long long a,b;
            cin>>a>>b;
            arr.push_back(make_pair(a,b));
        }
    for(long long i=0;i<n;i++)
    {
        arr1.push_back(make_pair(arr[i].first-arr[i].second,i));
        sum+=arr[i].first;
    }
        sort(arr1.begin(),arr1.end(),srt);
    for(long long i=0;i<n;i++)
    {
        if(sum>m)
        {
            sum-=arr1[i].first;
            count++;
        }
        if(sum<=m)
        {
            cout<<count;
            return 0;
        }
    }
    cout<<-1;
	return 0;
}
