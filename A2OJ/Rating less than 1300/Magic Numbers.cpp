#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long n=s.size();
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]!='4' && s[i]!='1')
        {
            cout<<"NO";
            return 0;
        }
        if(s[i]=='1')
            continue;
        if(s[i]=='4')
        {
            if(i>0 && s[i-1]=='1' && s[i+1]=='4')
            {
                i++;
                continue;
            }
            else if(i==n-1 && s[i-1]=='1')
                continue;
            else if(i>0 && s[i-1]=='1' && s[i+1]=='1')
                continue;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    return 0;
}
