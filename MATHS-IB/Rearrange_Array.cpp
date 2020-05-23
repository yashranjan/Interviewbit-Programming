void getAns(vector<int>&A,int ind){
    if(ind>=A.size()){
        return;
    }
    int curr=A[A[ind]];
    getAns(A,ind+1);
    A[ind]=curr;
}
void Solution::arrange(vector<int> &A) {
    getAns(A,0);
}
