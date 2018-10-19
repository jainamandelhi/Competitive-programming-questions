#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,total=0,s1=0,s2=0;
    cin>>n;
    int *ar=new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
        total+=ar[i];
        if(ar[i]==100)
            s1++;
        else
            s2++;
    }
    if(s2%2==0 && s1%2==0)
    {
        cout<<"YES";
        return 0;
    }
    if(s1%2 || n==1 ||(s1==0 && s2%2) || (s2==0 && s1%2))
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
    return 0;
}
