#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="hello";
    cin>>s;
    int j=0,cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(j<5 && s[i]==s1[j])
        {
            j++;
            cnt++;
        }
    }
    if(cnt==5)
        cout<<"YES";
    else
        cout<<"NO";
}
