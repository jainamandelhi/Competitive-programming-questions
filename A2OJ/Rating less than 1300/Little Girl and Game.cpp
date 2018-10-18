#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    int cnt=0;
    map<char,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second%2)
            cnt++;
    }
    if(cnt>0 && cnt%2==0)
        cout<<"Second";
    else
        cout<<"First";
	return 0;
}
