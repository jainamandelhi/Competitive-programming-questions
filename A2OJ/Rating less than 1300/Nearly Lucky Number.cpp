#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    int a;
    cin>>n;
    while(n)
    {
        a=n%10;
        if(a==4 || a==7)
            sum++;
        if(sum>7)
        {
            cout<<"NO";
            return 0;
        }
        n/=10;
    }
    if(sum==4 || sum==7)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
