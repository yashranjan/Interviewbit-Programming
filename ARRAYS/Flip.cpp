vector<int> Solution::flip(string A) {
       int count1=0;
    int n=A.size();
    int arr[n];
    for(int i=0;i<n;i++){
        if(A[i]=='1'){
            arr[i]=-1;
            count1++;
        }else{
            arr[i]=1;
        }
    }
    if(count1==n){
        vector<int>a;
        return a;
    }
    int l=0,r=0;
    int s=0,e=0;
    int maxSum=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++){
        if(maxEnding+arr[i]<arr[i]){
            maxEnding=arr[i];
            s=i;
            e=i;
        }else{
            maxEnding+=arr[i];
            e=i;
        }
        if(maxEnding>maxSum){
            // cout<<maxEnding<<"\n";
            maxSum=maxEnding;
            l=s;
            r=e;
        }
    }
    vector<int>a;
    a.push_back(++l);
    a.push_back(++r);
    return a;
}
