string Solution::convertToTitle(int A) {
    string ans="";
    while(A>0){
        if(A%26==0){
            ans+='Z';
            A=(A/26)-1;
        }else{
            ans+=('A'+(A%26)-1);
            A/=26;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
