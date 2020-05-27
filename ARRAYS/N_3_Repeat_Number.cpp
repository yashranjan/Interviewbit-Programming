int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int count1=0,count2=0;
    int first=INT_MAX,second=INT_MAX;
    for(auto i:A){
        if(i==first){
            count1++;
        }else if(i==second){
            count2++;
        }else if(count1==0){
            count1++;
            first=i;
        }else if(count2==0){
            count2++;
            second=i;
        }else{
            count2--;
            count1--;
        }
    }
    count1=0;
    count2=0;
    for(auto i:A){
        if(i==first){
            count1++;
        }else if(i==second){
            count2++;
        }
    }
    if(count1>(n/3)){
        return first;
    }else if(count2>(n/3)){
        return second;
    }
    return -1;
}
