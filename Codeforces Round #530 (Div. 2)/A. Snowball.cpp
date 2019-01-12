#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    int w,h;
    cin>>w>>h;
    vector<pair<int,int> >v;
    for(int i=0;i<2;i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb(mp(b,a));
    }
    sort(v.begin(),v.end());
   // cout<<w<<endl;
   // for(int i=0;i<2;i++)
   //    cout<<v[i].first<<" "<<v[i].second<<endl;
    for(int i=h;i>=0;i--)
    {
        w=w+i;
        if(i==v[0].first)
        {
            w-=v[0].second;
            if(w<0)
                w=0;
        }
        if(i==v[1].first)
        {
            w-=v[1].second;
            if(w<0)
                w=0;
        }
      //  cout<<w<<endl;
    }
    cout<<w;
    return 0;
}
