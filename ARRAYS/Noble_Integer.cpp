int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    for(auto itr=A.begin();itr!=A.end();){
        int val=*itr;
        itr=upper_bound(A.begin(),A.end(),val);
        if(distance(itr,A.end())==val){
            return 1;
        }
        if(itr==A.end()){
            break;
        }
    }
    return -1;
}
