#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2 || n==0)
    {
        cout<<"No";
        return 0;
    }
    cout<<"Yes"<<endl;
    int i=2;
    cout<<int(n/2)<<" ";
    while(i<=n)
    {
        cout<<i<<" ";
        i+=2;
    }
    cout<<endl;
    if(n%2)
        cout<<int(n/2)+1<<endl;
    else
        cout<<n/2<<endl;
    i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i+=2;
    }
    return 0;
}
