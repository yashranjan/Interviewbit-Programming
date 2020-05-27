vector<int> Solution::getRow(int A) {
    vector<int>arr;
    arr.push_back(1);
    if(A==0){
        return arr;
    }
    for(int i=1;i<=A;i++){
        vector<int>brr(i+1);
        for(int j=0;j<brr.size();j++){
            if(j==0||j==brr.size()-1){
                brr[j]=1;
            }else{
                brr[j]=arr[j]+arr[j-1];
            }
        }
        arr=brr;
    }
    return arr;
}
