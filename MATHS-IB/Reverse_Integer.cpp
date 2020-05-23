#define ll long long
int Solution::reverse(int A) {
    ll ans=0;
    bool isNeg=false;
    int orig=A;
    if(A<0){
        A=abs(A);
        isNeg=true;
    }
    while(A>0){
        ans=ans*10+A%10;
        A/=10;
    }
    if(ans<=INT_MIN or ans>=INT_MAX or orig<=INT_MIN or orig>=INT_MAX){
        return 0;
    }
    if(isNeg){
        ans=-ans;
    }

    return ans;
}
