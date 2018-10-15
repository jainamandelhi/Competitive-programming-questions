#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]=i+1;
    }
    int queries;
    cin>>queries;
    long long vasya=0,petya=0;
    while(queries--)
    {
        int a;
        cin>>a;
        vasya+=m[a];
        petya+=n-m[a]+1;
    }
    cout<<vasya<<" "<<petya;
    return 0;
}
