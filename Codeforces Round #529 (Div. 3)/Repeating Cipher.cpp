#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=1;
    while(1)
    {
        if(i>=n)
            break;
        cout<<s[i];
        i+=j;
        j++;
    }
    return 0;
}
