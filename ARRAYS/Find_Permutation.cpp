vector<int> Solution::findPerm(const string A, int B) {
    int l=B,s=1;
    vector<int>ans;
    for(auto i:A){
        if(i=='I'){
            ans.push_back(s);
            s++;
        }else{
            ans.push_back(l);
            l--;
        }
    }
    if(A[A.size()-1]=='D'){
        ans.push_back(s);
    }else{
        ans.push_back(l);
    }
    return ans;
}
