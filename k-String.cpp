/*
Aur doobna hai ya koodna zaruri tha?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   string s;
   cin>>s;
   map<char,int>m;
   map<char,int>::iterator itr;
   for(int i=0;i<s.size();i++)
        m[s[i]]++;
    for(itr=m.begin();itr!=m.end();itr++)
        if((itr->second)%t!=0)
        {
            cout<<-1;
            return 0;
        }
    string s1="";
    for(itr=m.begin();itr!=m.end();itr++)
    {
        int a=itr->second/t;
        while(a--)
            s1.push_back(itr->first);
    }
    while(t--)
        cout<<s1;
    return 0;
}
