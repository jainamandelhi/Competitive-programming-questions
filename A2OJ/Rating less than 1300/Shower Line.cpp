#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
    int p[5]={0,1,2,3,4};
    int maxi=0,sum=0;
    do{
        sum+=arr[p[0]][p[1]]+arr[p[1]][p[0]]+arr[p[1]][p[2]]+arr[p[2]][p[1]]+2*(arr[p[2]][p[3]]+arr[p[3]][p[2]])+2*(arr[p[3]][p[4]]+arr[p[4]][p[3]]);
        maxi=max(maxi,sum);
        sum=0;
    }while(next_permutation(p,p+5));
    cout<<maxi;
}
