bool comp(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    return a.first<b.first;
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>>arr;
    int n=arrive.size();
    for(int i=0;i<n;i++){
        if(arrive[i]==depart[i]){
            continue;
        }
        arr.push_back(make_pair(arrive[i],0));
        arr.push_back(make_pair(depart[i],1));
    }
    sort(arr.begin(),arr.end(),comp);
    int curr=0,best=0;
    for(auto i:arr){
        // cout<<i.first<<" "<<i.second<<"\n";
        if(i.second==0){
            curr++;
            best=max(best,curr);
        }else{
            curr--;
        }
    }
    return (K>=best);
}
