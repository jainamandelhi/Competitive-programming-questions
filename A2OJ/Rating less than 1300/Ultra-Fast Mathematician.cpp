#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    char ch[101];
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
            ch[i]='0';
        else
            ch[i]='1';
    }
    for(int i=0;i<s1.length();i++)
        cout<<ch[i];
}

