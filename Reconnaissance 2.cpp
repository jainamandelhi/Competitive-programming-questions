#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
        int si=0,sf=1;
        int diff=abs(arr[0]-arr[1]);
    for(int i=2;i<n;i++)
    {
        if(abs(arr[i]-arr[i-1])<diff)
        {
            diff=abs(arr[i]-arr[i-1]);
            si=i-1;
            sf=i;
        }
    }
    if(abs(arr[0]-arr[n-1])<diff)
    {
        si=0;
        sf=n-1;
    }
    cout<<sf+1<<" "<<si+1;
}
