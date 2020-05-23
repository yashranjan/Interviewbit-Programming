#define ll long long

vector<int> Solution::repeatedNumber(const vector<int> &A) {

    ll n=A.size();

    ll sum=(n*(n+1))/2;

    ll sum_sq=(n*(n+1)*(2*n+1))/6;

    ll missing=0,repeating=0;

    for(auto i:A){

        sum-=(ll)i;

        sum_sq-=((ll)(i)*(ll)(i));

    }

    vector<int>ans;

    missing=(sum+sum_sq/sum)/2;

    repeating=missing-sum;

    ans.push_back(repeating);

    ans.push_back(missing);

    return ans;

}

