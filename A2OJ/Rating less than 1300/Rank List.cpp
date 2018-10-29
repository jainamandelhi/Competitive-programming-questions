#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<pair<int,int> >p;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,51-b));
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    int d=p[k-1].first;
    int f=p[k-1].second;
    int sum=0;
   // cout<<d<<" "<<f<<endl;
    for(int i=0;i<n;i++)
    {
        //cout<<p[i].first<<" "<<p[i].second<<endl;
        if(p[i].first==d && p[i].second==f)
            sum++;
      //      cout<<i<<" "<<sum<<endl;
    }
    cout<<sum;
}
