#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2)
    {
        cout<<2<<" "<<2;
        return 0;
    }
    if(n>1)
        cout<<n-1<<" "<<n-1;
    else
        cout<<-1;
    return 0;
}
