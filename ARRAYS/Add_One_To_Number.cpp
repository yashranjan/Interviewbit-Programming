vector<int> Solution::plusOne(vector<int> &A) {
    int bal=1;
    for(int i=A.size()-1;i>=0;i--){
        if(A[i]<9){
            A[i]+=bal;
            bal=0;
            break;
        }else{
            A[i]=0;
        }
    }
    if(bal==1){
        A.insert(A.begin(),bal);
    }
    int ind=-1;
    while(A[ind]==0){
        ind++;
    }
    if(ind!=-1){
        vector<int>B(A.begin()+ind,A.end());
        return B;        
    }else{
        return A;
    }

}
