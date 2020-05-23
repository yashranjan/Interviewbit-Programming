int Solution::repeatedNumber(const vector<int> &A) {
    int a=0;
    if(A.size()==1){
        return -1;
    }
    int xor1=0,xor2=0;
    int n=A.size();
    for(int i=1;i<=n;i++){
        xor2^=A[i-1];
    }
    int mini=*min_element(A.begin(),A.end());
    int maxi=*max_element(A.begin(),A.end());
    for(int i=mini;i<=maxi;i++){
        xor1^=i;
    }
    return xor1^xor2; 
    // int slow=A[0];
    // int fast=A[A[0]];
    // while(slow!=fast){
    //     slow=A[slow];
    //     fast=A[A[fast]];
    // }
    // slow=0;
    // while(slow!=fast){
    //     slow=A[slow];
    //     fast=A[fast];
    // }
    // return slow;
}
