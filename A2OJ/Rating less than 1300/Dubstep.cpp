#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;)
    {
        while(i<n && i+1<n && i+2<n)
        {
            if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
            {
                i+=3;
                if(flag)
                    cout<<" ";
            }
            else
            {
                flag=1;
                cout<<s[i];
                i++;
                continue;
            }
        }
        if(i<n)
            cout<<s[i];
        i++;
    }
	return 0;
}
