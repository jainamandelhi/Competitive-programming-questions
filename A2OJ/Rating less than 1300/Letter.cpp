#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    getline(cin,s2);
    map<int,int>m;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==' ')
            continue;
        m[s1[i]-0]++;
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]==' ')
            continue;
        m[s2[i]-0]--;
        if(m[s2[i]-0]<0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
