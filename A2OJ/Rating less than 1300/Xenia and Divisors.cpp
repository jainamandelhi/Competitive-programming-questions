#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    int v[8]={0};
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        v[arr[i]]++;
    }
    if(v[1]<n/3)
    {
        cout<<-1;
        return 0;
    }
    if(v[2]+v[3]!=n/3 || v[2]+v[3]!=v[4]+v[6] || v[2]<v[4] || v[2]+v[3]<v[6] || v[5] || v[7])
    {
        cout<<-1;
        return 0;
    }
    for(int i=0;i<n/3;i++)
    {
        if(v[1] && v[2] && v[4])
        {
            flag=1;
            cout<<"1 2 4"<<endl;
            v[1]--;
            v[2]--;
            v[4]--;
            continue;
        }
        if(v[1] && v[3] && v[6])
        {
            flag=1;
            cout<<"1 3 6"<<endl;
            v[1]--;
            v[3]--;
            v[6]--;
            continue;
        }
        if(v[1] && v[2] && v[6])
        {
            flag=1;
            cout<<"1 2 6"<<endl;
            v[1]--;
            v[2]--;
            v[6]--;
            continue;
        }
    }
    if(!flag)
        cout<<-1;
}
