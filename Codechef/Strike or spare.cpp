#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<" "<<1;
        else if(n%2!=0&&n>1)
        {
            cout<<1<<" "<<1;
            for(int j=0;j<n-n/2-1;j++)
                cout<<0;
        }
        else
        {
            cout<<1<<" "<<1;
            for(int j=0;j<n/2;j++)
                cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
