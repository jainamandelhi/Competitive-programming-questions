#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,total=0;
    cin>>n>>m;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++)
    {
        if(i*i+j==n && i+j*j==m)
            total++;
    }
    cout<<total;
	return 0;
}
