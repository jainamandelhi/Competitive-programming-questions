#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,maxi=-1;
    cin>>n;
    string s;
    cin>>s;
    string s1="";
    map<char,int>m;
    map<char,int>::iterator itr;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES"<<endl;
            cout<<s[i]<<s[i+1];
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
