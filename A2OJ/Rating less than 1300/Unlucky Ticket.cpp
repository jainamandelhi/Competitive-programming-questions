#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n,s.end());
    //cout<<s;
    if(s[0]==s[n])
    {
        cout<<"NO";
        return 0;
    }
    int flag;
    if(s[0]>s[n])
        flag=1;
    else
        flag=0;
    for(int i=0;i<n;i++)
    {
        if(flag)
        {
            if(s[i]<=s[n+i])
            {
                cout<<"NO";
                return 0;
            }
        }
        else
        {
            if(s[i]>=s[n+i])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}
