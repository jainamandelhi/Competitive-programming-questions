#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxi=-1;
    cin>>n;
    vector<vector<int> >arr(24,vector<int>(60,0));
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]++;
        if(arr[a][b]>maxi)
            maxi=arr[a][b];
    }
    cout<<maxi;
}
