vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
        int n=A.size(),m=A[0].size();
    vector<vector<int>>ans;
    for(int i=0;i<m;i++){
        vector<int>curr;
        for(int j=i,k=0;j>=0&&k<n;j--,k++){
            curr.push_back(A[k][j]);
        }
        ans.push_back(curr);
    }
    for(int i=1;i<n;i++){
        vector<int>curr;
        for(int j=m-1,k=i;j>=0&&k<n;j--,k++){
            curr.push_back(A[k][j]);
        }
        ans.push_back(curr);
    }
    return ans;
}
