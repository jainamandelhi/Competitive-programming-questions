#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int index=0,mini=-1;
    vector<pair<int,int> >p;
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=arr[i];
        //cout<<sum<<endl;
    p.push_back(make_pair(sum,0));
    for(int i=1;i<n-k+1;i++){
        p.push_back(make_pair(sum-arr[i-1]+arr[i+k-1],i));
        sum=sum-arr[i-1]+arr[i+k-1];
       // cout<<i<<" "<<i+k-1<<" "<<sum<<endl;
    }
    sort(p.begin(),p.end());
   // for(int i=0;i<p.size();i++)
     //   cout<<p[i].first<<" "<<p[i].second<<endl;
        cout<<p[0].second+1;
}
