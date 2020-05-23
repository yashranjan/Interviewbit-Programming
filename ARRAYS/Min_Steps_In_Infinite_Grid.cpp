int Solution::coverPoints(vector<int> &a, vector<int> &b) {
    int ans=0;
    for(int i=1;i<a.size();i++){
        ans+=max(abs(a[i]-a[i-1]),abs(b[i]-b[i-1]));
        // int dist=floor(sqrt(pow(x-x1,2)+pow(y-y1,2)*1.0));
        // cout<<dist<<"\n";
        // ans+=dist;
    }
    return ans;
    
}

