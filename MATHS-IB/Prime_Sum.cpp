#define ll long long
#define MAX 1005
bool check[MAX];
vector<int>primes;
void seive(){
    fill(check,check+MAX,true);
    check[0]=check[1]=false;
    for(ll i=2;i<=sqrt(MAX);i++){
        if(check[i]){
            for(ll j=i*i;j<MAX;j+=i){
                check[j]=false;
            }
        }
    }
    for(ll i=0;i<MAX;i++){
        if(check[i]){
            primes.push_back(i);
        }
    }
}
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n==2||n==3){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int>ans;
    seive();
    for(auto i:primes){
        if(isPrime(A-i)){
            ans.push_back(i);
            ans.push_back(A-i);
            return ans;
        }
    }
    return ans;
}

