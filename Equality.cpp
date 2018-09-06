#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    map<char,int>::iterator itr;
    int mini=n,total=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        total++;
        if(total>k)
            break;
        if(itr->second<mini)
            mini=itr->second;
    }
    if(total<k)
    {
        cout<<0;
        return 0;
    }
    cout<<mini*k;
    return 0;
}
