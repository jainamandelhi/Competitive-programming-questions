#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=INT_MIN,mini=INT_MAX;
    cin>>n;
    vector<pair<int,int> >arr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<mini)
            mini=a;
        if(b>maxi)
            maxi=b;
        arr.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i].first==mini && arr[i].second==maxi)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
	return 0;
}
