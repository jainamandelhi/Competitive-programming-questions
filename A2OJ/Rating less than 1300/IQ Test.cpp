#include<bits/stdc++.h>
using namespace std;
int a,b;
void cnt(char f)
{
    if(f=='#')
        a++;
    else
        b++;
}
int main()
{
    vector<string>s;
    for(int i=0;i<4;i++)
    {
        string s1;
        cin>>s1;
        s.push_back(s1);
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            char c=s[i][j];
            if(j+1<4 && i+1<4)
            {
                a=0,b=0;
                cnt(s[i][j]);
                cnt(s[i+1][j+1]);
                cnt(s[i][j+1]);
                cnt(s[i+1][j]);
                //cout<<a<<" "<<b<<endl;
                if(abs(a-b)==2 || abs(a-b)==4)
                {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
