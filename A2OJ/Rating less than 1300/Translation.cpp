#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    stack<char>st;
    for(int i=0;i<s.size();i++)
        st.push(s[i]);
    for(int i=0;i<s.size();i++)
    {
        if(s1[i]!=st.top())
        {
            cout<<"NO";
            return 0;
        }
        st.pop();
    }
    cout<<"YES";
    return 0;
}
