#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%7==6)
        cout<<2*(n/7)+1;
    else
        cout<<2*(n/7);
    cout<<" ";
    if(n%7==1)
        cout<<2*(n/7)+1;
    else if(n%7>1)
        cout<<2*(n/7)+2;
    else
    cout<<2*(n/7);
}
