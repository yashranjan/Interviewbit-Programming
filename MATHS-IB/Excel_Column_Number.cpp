int Solution::titleToNumber(string A) {
    int ans=0;
    int currP=0;
    for(int i=A.size()-1;i>=0;i--){
        ans+=(A[i]-'A'+1)*pow(26,currP);
        currP++;
    }
    return ans;
}
