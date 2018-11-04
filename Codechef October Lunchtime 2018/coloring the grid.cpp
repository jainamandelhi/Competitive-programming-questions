#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
        vector<vector<int> >v(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='.' && i+1<n && j+1<m && s[i][j+1]=='.' && s[i+1][j]=='.' && s[i+1][j+1]=='.')
                {
                    v[i][j]=1;
                    v[i+1][j]=1;
                    v[i][j+1]=1;
                    v[i+1][j+1]=1;
                }
                if(s[i][j]=='#')
                    v[i][j]=-1;
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v[i][j]==-1)
                    continue;
                if(v[i][j]==0)
                {
                    cout<<"NO";
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(!flag)
            cout<<"YES";
        cout<<endl;
    }
}
