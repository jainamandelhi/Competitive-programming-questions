#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str,str1;
    cin>>str;
    int a=1,b=0;
    for(int i=1;i<n;i++)
    {
        string s;
        cin>>s;
        if(str==s)
            a++;
        else
        {
            str1=s;
            b++;
        }
    }
    if(a>b)
        cout<<str;
    else
        cout<<str1;
    return 0;
}
