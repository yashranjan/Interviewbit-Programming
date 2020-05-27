int segregate(vector<int>&A){
    int i=0,j=0;
    int n=A.size();
    for(;i<n;i++){
        if(A[i]<=0){;
            swap(A[i],A[j]);
            j++;
        }
    }
    return j;
}
int Solution::firstMissingPositive(vector<int> &A) {
    int j=segregate(A);
    int n=A.size();
    if(j==n){
        return 1;
    }
    int size=A.size()-j;
    for(int i=j;i<n;i++){
        if((abs(A[i])-1+j)<n&&A[abs(A[i])-1+j]>0){
            A[abs(A[i])-1+j]=-A[abs(A[i])-1+j];
        }
    }
    for(int i=j;i<n;i++){
        if(A[i]>0){
            return i+1-j;
        }
    }
    return size+1;
}
