#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int swaps=0;
    vector<int>arr(2*n);
    for(int i=0;i<2*n;i++)
    cin>>arr[i];
    int ptr=1;
    for(int i=0;i<2*n-1;)
    {
        while(arr[ptr]!=arr[i])
            {
                ptr++;
                swaps++;
            }
            while(ptr!=i)
            {
                swap(arr[ptr],arr[ptr-1]);
                ptr--;
            }
            i+=2;
            ptr=i+1;
    }
    cout<<swaps;
    return 0;
}
