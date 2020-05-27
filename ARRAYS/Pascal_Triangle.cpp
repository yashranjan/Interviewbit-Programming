vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>>arr(A);
    if(A==0){
        
        return arr;
    }
    for(int i=0;i<A;i++){
        vector<int>a(i+1);
        arr[i]=a;
    }
    arr[0][0]=1;
    for(int i=1;i<A;i++){
        for(int j=0;j<arr[i].size();j++){
            if(j==0){
                arr[i][j]=arr[i-1][j];
            }else if(j==arr[i-1].size()){
                arr[i][j]=arr[i-1][j-1];
            }else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
    return arr;
}
