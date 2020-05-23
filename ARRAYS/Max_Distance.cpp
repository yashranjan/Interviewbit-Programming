int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    vector<int>L(n);
    vector<int>R(n);
    L[0]=A[0];
    for(int i=1;i<n;i++){
        L[i]=min(L[i-1],A[i]);
    }
    R[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--){
        R[i]=max(R[i+1],A[i]);
    }
    int ans=0;
    int i=0,j=0;
    while(i<n&&j<n){
        if(L[i]<=R[j]){
            
            ans=max(ans,j-i);
            j++;
        }else{
            i++;
        }
    }
    return ans;
}
