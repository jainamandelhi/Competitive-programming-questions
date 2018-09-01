vector<int> Solution::plusOne(vector<int> &A) {
    int carry=1,sum;
    reverse(A.begin(),A.end());
    vector<int>arr;
    for(int i=0;i<A.size();i++)
    {
        sum=A[i]+carry;
        arr.push_back(sum%10);
        carry=sum/10;
    }
    while(carry)
    {
        arr.push_back(carry%10);
        carry/=10;
    }
    int n=arr.size()-1;
    while(arr[n]==0 && n>0)
    {
        arr.pop_back();
        n=arr.size()-1;
    }
    reverse(arr.begin(),arr.end());
    return arr;
}
