#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int mini=min(k*l/nl,c*d);
    mini=min(mini,p/np);
    cout<<mini/n;
    return 0;
}
