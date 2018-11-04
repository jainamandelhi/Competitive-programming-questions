#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+(-1)*z==0 || (-1)*x+y+z==0 || (-1)*y+x+z==0)
            cout<<"yes";
        else
            cout<<"no";
        cout<<endl;
    }
    return 0;
}
