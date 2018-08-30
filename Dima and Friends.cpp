#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum1=-1;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum1+=a;
    }
    int ways=0;
    for(int i=1;i<=5;i++)
    {
        if((sum1+i)%(n+1)!=0)
            ways++;
    }
    cout<<ways;
    return 0;
}
