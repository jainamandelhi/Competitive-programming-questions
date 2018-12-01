#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>c;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        c.push_back(s);
    }
    vector<vector<int> >v(n,vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(c[i][j]=='-')
                v[i][j]++;
    }
    if(c[0][0]=='.')
        c[0][0]='B';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 && j>0)
            {
                if(c[i][j-1]=='B')
                    c[i][j]='W';
                else
                    c[i][j]='B';
                continue;
            }
            if(j==0 && i>0)
            {
                if(c[i-1][j]=='B')
                    c[i][j]='W';
                else
                    c[i][j]='B';
                continue;
            }
            else
            {
                if(c[i][j-1]=='B')
                    c[i][j]='W';
                else
                    c[i][j]='B';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(v[i][j]!=0){
                cout<<'-';
                continue;
            }
            cout<<c[i][j];
        }
        cout<<endl;
    }
}
