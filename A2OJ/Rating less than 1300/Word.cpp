#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sumlc=0,sumuc=0;
    vector<int>arr(s.length());
    int i=0;
    while(s[i]!='\0')
    {
        if(int(s[i])>=97)
            sumlc++;
        else
            sumuc++;
            i++;
    }
    i=0;
    int x=32;
    if(sumlc<sumuc)
    {
        while(s[i]!='\0')
        {
            if(s[i]>=97)
                s[i]=s[i]-32;
            i++;
        }
    }
    else
    {
        while(s[i]!='\0')
        {
            if(s[i]<=90)
                s[i]=s[i]+32;
            i++;
        }
    }
    cout<<s;
    return 0;
}
