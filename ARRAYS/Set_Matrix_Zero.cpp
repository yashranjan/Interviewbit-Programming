void Solution::setZeroes(vector<vector<int>> &A) {
    int n=A.size();
    int m=A[0].size();
    int hasRow=false,hasCol=false;
    for(int i=0;i<m;i++){
        if(A[0][i]==0){
            hasRow=true;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(A[i][0]==0){
            hasCol=true;
            break;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[i][j]==0){
                A[i][0]=0;
                A[0][j]=0;
                break;
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(A[i][0]==0||A[0][j]==0){
                A[i][j]=0;
            }
        }
    }
    if(hasRow){
        for(int i=0;i<m;i++){
            A[0][i]=0;
        }
    }
    if(hasCol){
        for(int i=0;i<n;i++){
            A[i][0]=0;
        }
    }
}
