#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int total=0,flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-'0'==flag)
            total++;
        else
        {
            flag=!flag;
            total=1;
        }
        if(total==7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
