#define ll long long
vector<int> Solution::maxset(vector<int> &arr) {
    int n=arr.size();
    int l=0,r=0;
    int s=0,e=0;
    while(arr[l]<0&&l<n){
        l++;
    }
    if(l==n){
        vector<int>ans;
        return ans;
    }
    ll maxSum=INT_MIN,currSum=0;
    r=l;
    s=l;
    e=l;
    for(int i=l;i<n;i++){
        if(arr[i]>=0){
            if(l==-1){
                l=i;
            }
            currSum+=arr[i];
            r=i;
            if(maxSum<=currSum){
                if(maxSum==currSum){
                    if((r-l)>(e-s)){
                        maxSum=currSum;
                        e=r;
                        s=l;
                    }
                }else if(currSum>maxSum){
                    maxSum=currSum;
                    e=r;
                    s=l;
                }
            }
        }else{
            currSum=0;
            l=-1;
        }
    }
    vector<int>ans;
    for(int i=s;i<=e;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
