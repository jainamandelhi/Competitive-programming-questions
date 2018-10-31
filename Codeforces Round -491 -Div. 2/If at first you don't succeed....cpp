#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if(a+b-c>=n||c>a||c>b||c>a+b)
    cout<<-1;
    else
    cout<<n-(a+b-c);
    return 0;
}
