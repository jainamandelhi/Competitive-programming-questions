int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int steps=0;
    for(int i=0;i<A.size()-1;i++)
    {
        if(abs(A[i+1]-A[i])==1 && abs(B[i+1]-B[i])==1)
            steps++;
        else if((abs(A[i+1]-A[i])==1 && abs(B[i+1]-B[i])==0) || (abs(A[i+1]-A[i])==0 && abs(B[i+1]-B[i])==1))
            steps++;
        else
            steps+=max(abs(A[i+1]-A[i]),abs(B[i+1]-B[i]));
    }
    return steps;
}
