#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        s.push_back(t);
    }
    int countr=0,countc=0,r,c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='B')
            {
                r=i;
                c=j;
                int k=j,l=i;
                while(k<m && s[i][k]!='W')
                {
                    countr++;
                    k++;
                }
                while(l<n && s[l][j]!='W')
                {
                    countc++;
                    l++;
                }
                cout<<r+countr/2+1<<" "<<c+countc/2+1;
                return 0;
            }

        }
    }
}
