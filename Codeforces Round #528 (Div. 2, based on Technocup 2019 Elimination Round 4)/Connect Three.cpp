#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    vector<pair<int,int> >v,ans;
    v.pb(mp(x1,y1));
    v.pb(mp(x2,y2));
    v.pb(mp(x3,y3));

    sort(v.begin(),v.end());

    int d=v[1].first-v[0].first;

    for(int i=0;i<=d;i++)
        ans.pb(mp(v[0].first+i,v[0].second));

    d=abs(v[1].second-v[0].second);

    if(v[1].second>v[0].second)
        for(int i=1;i<=d;i++)
            ans.pb(mp(v[1].first,v[0].second+i));

    else
        for(int i=1;i<=d;i++)
            ans.pb(mp(v[1].first,v[0].second-i));

    d=abs(v[2].second-v[1].second);

    if(v[2].second>v[1].second)
        for(int i=1;i<=d;i++)
            ans.pb(mp(v[1].first,v[1].second+i));

    else
        for(int i=1;i<=d;i++)
            ans.pb(mp(v[1].first,v[1].second-i));

    d=v[2].first-v[1].first;

    for(int i=1;i<=d;i++)
        ans.pb(mp(v[1].first+i,v[2].second));

    int s=0;

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
    {
        if(i>0 && ans[i].first==ans[i-1].first && ans[i].second==ans[i-1].second)
            continue;
        s++;
    }

    cout<<s<<endl;

    for(int i=0;i<ans.size();i++)
    {
        if(i>0 && ans[i].first==ans[i-1].first && ans[i].second==ans[i-1].second)
            continue;
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

    return 0;
}
