#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
#define mod = 35353535
int main()
{
    long nm,sm;
    cin>>nm>>sm;
    if(nm-1 >= sm-(nm-1)-1)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    for(int i = 0; i < nm-1; i++)
        cout<<1<<" ";
    cout<<sm-(nm-1)<<endl;
    cout<<nm;
    return 0;
}
