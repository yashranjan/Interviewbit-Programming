#define mod 1000000007
#define ll long long
int Solution::hammingDistance(const vector<int> &A) {
    ll ans=0;
    int n=A.size();
    for(int i=0;i<32;i++){
        ll count=0;
        for(auto j:A){
            if(j&(1<<i)){
                count++;
            }
        }
        count=(count%mod*(n-count)%mod)%mod;
        count=(2*count)%mod;
        ans=(ans%mod+count%mod)%mod;
    }
    return ans;
}
