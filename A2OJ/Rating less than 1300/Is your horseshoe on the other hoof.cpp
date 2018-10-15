#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    for(int i=0;i<4;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    map<int,int>::iterator itr;
    int count1=0;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        while(itr->second>1)
        {
            count1++;
            itr->second--;
        }
    }
    cout<<count1;
}
