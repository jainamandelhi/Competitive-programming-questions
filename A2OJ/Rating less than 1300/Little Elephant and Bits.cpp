#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(),flag=1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && flag)
        {
            flag=0;
            continue;
        }
        if(i==n-1 && flag)
            break;
        cout<<s[i];
    }
	return 0;
}
