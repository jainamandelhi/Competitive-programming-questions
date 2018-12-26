#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    vector<pair<int,int> >v;
    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
        v.pb(mp(itr->second,itr->first));
    sort(v.rbegin(),v.rend());
    vector<int>ans;
    int l=1,h=n,a=1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        int p=0;
        for(int j=0;j<v.size();j++)
            p+=v[j].first/m;
        if(p<k)
            h=m-1;
        else
        {
            l=m+1;
            a=m;
        }
    }
    for(int q=0;q<n;q++)
    {
        int y=v[q].first/a;
        for(int o=0;o<y;o++)
        {
            ans.pb(v[q].second);
            if(ans.size()==k)
            {
                for(int g=0;g<k;g++)
                    cout<<ans[g]<<" ";
                return 0;
            }
        }
    }
    for(int i=0;i<k;i++)
        cout<<v[i].second<<" ";
}
