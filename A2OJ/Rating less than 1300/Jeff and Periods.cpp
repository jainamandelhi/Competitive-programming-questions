#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >arr;
    vector<pair<int,int> >arr1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(make_pair(a,i));
    }
    sort(arr.begin(),arr.end());
    int flag=0;
    if(n==1){
            cout<<1<<endl;
        cout<<arr[0].first<<" "<<0;
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i].first!=arr[i+1].first)
        {
            arr1.push_back(make_pair(arr[i].first,0));
            continue;
        }
        int d=arr[i+1].second-arr[i].second;
        while(i<n-1 && arr[i].first==arr[i+1].first)
        {
            if(d!=arr[i+1].second-arr[i].second)
            {
                flag=1;
                while(arr[i].first==arr[i+1].first)
                    i++;
                break;
            }
        i++;
        }
        if(!flag)
            arr1.push_back(make_pair(arr[i].first,d));
        flag=0;
    }
    if(n>1 && arr[n-1].first!=arr[n-2].first)
        arr1.push_back(make_pair(arr[n-1].first,0));
    int t=arr1.size();
    cout<<t<<endl;
    for(int i=0;i<t;i++)
        cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
    return 0;
}
