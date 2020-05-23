int Solution::isPalindrome(int A) {
    if(A<0){
        return false;
    }
    if(A<=9){
        return true;
    }
    string a=to_string(A);
    string b=a;
    reverse(a.begin(),a.end());
    return a==b;
}
