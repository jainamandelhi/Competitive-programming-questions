#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int sum1=0,sum9=0,flag=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        sum1+=a;
        if(a==0){
            flag=1;
            sum9++;
        }
    }
    if(flag==0)
    {
        cout<<-1;
        return 0;
    }
    while(sum1%9!=0)
        sum1-=5;
        if(sum1==0)
        {
            cout<<0;
            return 0;
        }
    while(sum1>0){
        cout<<5;
        sum1-=5;
    }
    while(sum9!=0)
    {
        cout<<0;
        sum9--;
    }
    return 0;
}
