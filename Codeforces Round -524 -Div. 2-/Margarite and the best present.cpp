#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n;
   cin>>n;
   for(long long i=0;i<n;i++)
   {
       long long a,b;
       cin>>a>>b;
       if(a%2 && b%2)
            cout<<-1*b+(b-a)/2;
       else if(a%2 && b%2==0)
           cout<<(b-a+1)/2;
        else if(a%2==0 && b%2)
            cout<<-1*(b-a+1)/2;
        else
            cout<<b-(b-a)/2;
        cout<<endl;
    }
}
