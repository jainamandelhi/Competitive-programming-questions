#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    long long n,m,x,y,knowledge=1,power=1;
    cin>>n>>m>>x>>y;
    if(knowledge+1==n && power+1==m)
    {
        cout<<"Chefirnemo"<<endl;
        continue;
    }
    n--;
    m--;
    if(n%x==0 && m%y==0)
        cout<<"Chefirnemo"<<endl;
    else if(n>0 && m>0 && (n-1)%x==0 && (m-1)%y==0)
        cout<<"Chefirnemo"<<endl;
    else
        cout<<"Pofik"<<endl;
    }
return 0;
}
