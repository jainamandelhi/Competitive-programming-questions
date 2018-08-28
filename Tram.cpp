#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max1=0,total=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        total+=b-a;
        if(total>max1)
            max1=total;
    }
    cout<<max1;
}
