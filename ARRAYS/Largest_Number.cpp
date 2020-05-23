bool comp(int a,int b){
    string X=to_string(a);
    string Y=to_string(b);
    if((X+Y)>(Y+X)){
        return true;
    }
    return false;

}
string Solution::largestNumber(const vector<int> &A){
    vector<int>B(A.begin(),A.end());
    sort(B.begin(),B.end(),comp);
    string ans="";
    for(auto i:B){
        ans+=to_string(i);
    }
    int ind=-1;
    int i=0;
    while(ans[i]=='0'&&i<ans.size()){
        i++;
        ind=0;
    }
    if(ind==-1)
        return ans;
    if(i==ans.size()){
        return "0";
    }
    ans=ans.substr(i);
    return ans;
}
