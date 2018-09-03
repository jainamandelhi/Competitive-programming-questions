#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n>=(1<<i))i++;
    cout<<i;
}
