#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='.')
            cout<<0;
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
                cout<<1;
            else
                cout<<2;
            i++;
        }
        i++;
    }
    return 0;
}
