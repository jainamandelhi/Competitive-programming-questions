#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,n;
	cin>>s>>n;
	vector<pair<int,int> >arr;
	for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back(make_pair(a,b));
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        if(s<=arr[i].first)
        {
            cout<<"NO";
            return 0;
        }
        s+=arr[i].second;
    }
    cout<<"YES";
	return 0;
}
