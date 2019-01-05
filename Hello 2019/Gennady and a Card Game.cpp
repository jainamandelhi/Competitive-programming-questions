#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    char c1=s[0],c2=s[1];
    for(int i=0;i<5;i++)
    {
        string s1;
        cin>>s1;
        if(s1[0]==s[0] || s1[1]==s[1])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
