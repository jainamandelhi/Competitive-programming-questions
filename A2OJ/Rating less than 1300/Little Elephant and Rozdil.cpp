#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    vector<pair<int,int> >p;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        p.push_back(make_pair(a,i));
    }
    sort(p.begin(),p.end());
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(p[0].first==p[1].first)
    {
        cout<<"Still Rozdil";
        return 0;
    }
    cout<<p[0].second+1;
}
