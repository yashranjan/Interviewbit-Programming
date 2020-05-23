#define LL long long
#define M 1000000007
using namespace std;

LL getAns(int n,int m,vector<int>&arr){
    LL nCr[1001][1001],ans=1,s[1001],power[1001];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i) nCr[i][j]=1;
            else nCr[i][j]=(nCr[i-1][j-1]+nCr[i-1][j])%M;
        }
    }
    power[0]=1;power[1]=1;
    for(int i=0;i<m;i++){
        s[i]=arr[i];
    }
    for(int i=2;i<=n;i++) power[i]=(power[i-1]*2)%M;
    sort(s,s+m);
    LL cnt=0,tmp;
    for(int i=0;i<m;i++){
        if(i==0) tmp=s[i]-1;
        else{
            tmp=s[i]-s[i-1]-1;
            ans=(ans*power[tmp])%M;
        }
        cnt+=tmp;
        ans=(ans*nCr[cnt][tmp])%M;
    }
    cnt+=n-s[m-1];
    ans=ans*nCr[cnt][n-s[m-1]]%M;
    return ans;
}
int Solution::solve(int A, vector<int> &B) {
    return getAns(A,B.size(),B);
    
}
