vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    int s=0,e=n-1;
    for(s=0;s<n-1;s++){
        if(A[s]>A[s+1]){
            break;
        }
    }
    if(s==n-1){
        vector<int>ans={-1};
        return ans;
    }
    for(e=n-1;e>=1;e--){
        if(A[e]<A[e-1]){
            break;
        }
    }
    int maxi=A[s],mini=A[s];
    maxi=*max_element(A.begin()+s,A.begin()+e+1);
    mini=*min_element(A.begin()+s,A.begin()+e+1);
    for(int i=0;i<s;i++){
        if(A[i]>mini){
            s=i;
            break;
        }
    }
    for(int i=n-1;i>=e+1;i--){
        if(A[i]<maxi){
            e=i;
            break;
        }
    }
    vector<int>ans={s,e};
    return ans;
}
