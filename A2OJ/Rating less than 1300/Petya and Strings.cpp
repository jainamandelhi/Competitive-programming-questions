#include<bits/stdc++.h>
using namespace std;
int main()
{
string a,b;
cin>>a>>b;
for(int i=0;i<a.size();i++)
    a[i]=tolower(a[i]);
for(int i=0;i<b.size();i++)
    b[i]=tolower(b[i]);
int flag=0;
for(int i=0;i<min(a.size(),b.size());i++)
{
    if(a[i]>b[i])
    {
        flag=1;
        break;
    }
    else if(a[i]<b[i])
    {
        flag=-1;
        break;
    }
}
if(flag==0 && a.size()==b.size())
{
    cout<<0;
    return 0;
}
if(flag ==0 && a.size()>b.size())
{
    cout<<1;
    return 0;
}
if(flag==0 && a.size()<b.size())
{
    cout<<-1;
    return 0;
}
cout<<flag;
}
