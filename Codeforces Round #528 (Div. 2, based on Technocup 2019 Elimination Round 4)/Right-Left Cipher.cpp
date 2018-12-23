#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size(),mid;
    if(n%2!=0)
        mid=n/2;
    else
        mid=n/2-1;
    string s1="";
    s1.pb(s[mid]);
    int midl=mid-1,midr=mid+1,flag=1;
    while(1)
    {
        if(flag==1 && midr<n)
        {
            flag=0;
            s1.pb(s[midr]);
            midr++;
        }
        else if(flag==0 && midl>=0)
        {
            flag=1;
            s1.pb(s[midl]);
            midl--;
        }
        else
            break;
    }
    cout<<s1;
    return 0;
}
