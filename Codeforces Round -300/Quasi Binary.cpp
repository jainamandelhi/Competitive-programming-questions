#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1="CODEFORCES";
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s1[j])
            j++;
        if(j==10)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
