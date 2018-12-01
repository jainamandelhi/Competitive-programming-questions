#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,flag=1,t=0;
    vector<int>g;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='G')
        {
            t++;
            cnt++;
            flag=0;
        }
        if(s[i]=='S')
        {
            g.push_back(cnt);
            cnt=0;
            flag=1;
        }
    }
    if(flag==0)
        g.push_back(cnt);
    int maxi=0;
   /* for(int i=0;i<g.size();i++)
        cout<<g[i]<<" ";
    cout<<endl;*/
    for(int i=0;i<g.size();i++)
    {
        if(g[0]==n)
        {
            cout<<n;
            return 0;
        }
        /*if(g.size()==n)
        {
            cout<<0;
            return 0;
        }
        if(g.size()==2)
        {
            cout<<max(g[0],g[1]);
            return 0;
        }*/
        if(i==0)
        {
            cnt=g[i]+g[i+1]+1;
            if(cnt>maxi)
                maxi=cnt;
        }
        if(i>0 && i<g.size()-1)
        {
            cnt=g[i]+g[i+1]+1;
            if(cnt>maxi)
                maxi=cnt;
        }
       // cout<<cnt<<" ";
    }
    maxi=min(maxi,t);
    cout<<maxi;
}
