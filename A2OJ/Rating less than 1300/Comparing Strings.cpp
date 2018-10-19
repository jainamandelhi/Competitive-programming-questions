#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    int t=0,j=-1,k=-1;
    if(n!=m)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            t++;
            if(j==-1)
                j=i;
            else
                k=i;
        }
    }
    swap(a[j],a[k]);
    if(t!=2 || a!=b)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
