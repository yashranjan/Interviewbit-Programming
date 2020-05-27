vector<int> getLeft(vector<int>A,int n){
    stack<int>s;
    vector<int>leftArr(n+1,0);
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&A[i]>A[s.top()]){
            int r=s.top();
            s.pop();
            // cout<<r<<" ";
            leftArr[r]=i;
        }
        s.push(i);
    }
    return leftArr;
}
vector<int>getRight(vector<int>A,int n){
    stack<int>s;
    vector<int>rightArr(n+1,0);
    for(int i=0;i<n;i++){
        while(!s.empty()&&A[i]>A[s.top()]){
            int r=s.top();
            s.pop();
            rightArr[r]=i;
        }
        s.push(i);
    }
    return rightArr;
}
int Solution::maxSpecialProduct(vector<int> &A) {
    if(A.size()<=1){
        return 0;
    }
    int n=A.size();
    vector<int>left=getLeft(A,n);
    vector<int>right=getRight(A,n);
    long long ans=-1;
    for(int i=0;i<n;i++){
        ans=max(ans,(left[i]*1LL*right[i]));
    }
    return ans%1000000007;
}
