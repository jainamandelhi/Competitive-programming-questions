#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>arr(30);
    int count1=0;
    for(int i=0;i<s.size();i++)
    {
        arr[int(s[i])-96]++;
    }
    for(int i=0;i<27;i++)
    {
        if(arr[i])
            count1++;
    }
    if(count1%2)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}
