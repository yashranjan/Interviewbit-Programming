#define mod 1000000007
#define MAX 100005    //10^5+5
#define MAXN 1000005    //10^6+5
#define pi pair<int,int>
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define ll long long

ll multFactors(int n){
    ll ans=1;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i==(n/i)){
                ans=(ans%mod*i%mod)%mod;
            }else{
                ans=(ans%mod*i%mod)%mod;
                ans=(ans%mod*(n/i)%mod)%mod;                                
            }
        }
    }
    return ans;
}
vector<int> Solution::solve(vector<int> &A, vector<int> &B){
    int n=A.size();
    int L[n],R[n];
    memset(L,0,sizeof(L));
    memset(R,0,sizeof(R));
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty()&&A[s.top()]<=A[i]){
            L[i]+=L[s.top()]+1;
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        s.pop();
    }
    for(int i=n-1;i>=0;i--){
        while(!s.empty()&&A[s.top()]<A[i]){
            R[i]+=R[s.top()]+1;
            s.pop();
        }
        s.push(i);
    }
    vector<ll>ans;
    map<ll,int>m;
    for(int i=0;i<n;i++){
        int val=(L[i]+1)*(R[i]+1);
        ll divMul=multFactors(A[i]);
        m[divMul]=val;
    }
    auto itr=m.rbegin(),prevItr=m.rbegin();
    itr++;
    while(itr!=m.rend()){
        (itr->second)+=(prevItr->second);
        itr++;
        prevItr++;
    }
    vector<int>ret;
    for(auto i:B){
        itr=lower_bound(m.begin(),)
        ret.push_back(ans[i-1]);
    }
    return ret;
}
