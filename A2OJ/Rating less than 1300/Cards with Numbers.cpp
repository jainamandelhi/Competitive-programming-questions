#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    n=2*n;
    vector<vector<int> >p(5001);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        p[a].push_back(i+1);
    }
  //  cout<<p.size();
    for(int i=0;i<p.size();i++)
        if(p[i].size()%2!=0)
        {
            cout<<-1;
            return 0;
        }
    for(int i=0;i<p.size();i++)
    {
        if(p[i].size()==0)
            continue;
        for(int j=0;j<p[i].size();j+=2)
            cout<<p[i][j]<<" "<<p[i][j+1]<<" ";
        cout<<endl;
    }
    return 0;
}
