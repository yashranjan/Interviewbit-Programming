/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool comp(Interval a,Interval b){
     return a.start<b.start;
 }
vector<Interval> Solution::merge(vector<Interval> &A) {
    sort(A.begin(),A.end(),comp);
    vector<Interval>ans;
    ans.push_back(A[0]);
    int n=A.size();
    for(int i=1;i<n;i++){
        if(A[i].start<=ans[ans.size()-1].end){
            ans[ans.size()-1].end=max(ans[ans.size()-1].end,A[i].end);
        }else{
            ans.push_back(A[i]);
        }
    }
    return ans;
}
