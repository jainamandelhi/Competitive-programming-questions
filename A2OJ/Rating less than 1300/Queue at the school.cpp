#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int j=0;j<d;j++)
    {
        int i=0;
        while(i<n-1)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=2;
            }
            else
                i++;
        }
    }
    cout<<s;
    return 0;
}
