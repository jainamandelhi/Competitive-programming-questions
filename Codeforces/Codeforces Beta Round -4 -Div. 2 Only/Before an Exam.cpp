#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long n,d,sumf=0,suml=0;
        cin>>n>>d;
    vector<pair<ll,ll> >p;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        p.push_back(make_pair(a,b));
        sumf+=a;
        suml+=b;
    }
    if(d<=suml && d>=sumf)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO";
        return 0;
    }
    int flag=1;
    //sort(p.begin(),p.end());
    for(ll i=0;i<n;i++)
    {
        if(d-p[i].second>sumf-p[i].first && flag==1)
        {
            cout<<p[i].second<<" ";
            suml-=p[i].second;
            d-=p[i].second;
            sumf-=p[i].first;
        }
        else
        {
            flag=0;
            if(d>sumf){
                cout<<d-sumf+p[i].first<<" ";
                d=sumf-2;
            }
            else
                cout<<p[i].first<<" ";
        }
       // cout<<sumf<<" "<<d<<" "<<suml<<endl;
    }
    return 0;
}
