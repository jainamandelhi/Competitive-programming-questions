#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<s.length()-1;)
    {
        if(s[i]==s[i-1] || s[i]==s[i+1])
        {
            s.erase(i,1);
            count++;
        }
        else
            i++;
    }
    if(s[s.length()-1]==s[s.length()-2])
        count++;
    cout<<count;
    return 0;
}
