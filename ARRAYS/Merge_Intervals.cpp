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
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    vector<Interval>ans;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),comp);
    ans.push_back(intervals[0]);
    int n=intervals.size();
    for(int i=1;i<n;i++){
        if(intervals[i].start<=ans[ans.size()-1].end){
            ans[ans.size()-1].end=max(ans[ans.size()-1].end,intervals[i].end);
        }else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}
