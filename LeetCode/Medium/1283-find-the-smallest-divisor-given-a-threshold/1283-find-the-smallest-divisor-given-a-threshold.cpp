class Solution {
public:
    bool check(vector<int>& nums, int t, int mid){
        long long sum{};
        for(auto &i: nums)
            sum += (i+mid-1)/mid;
        return sum <= t;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int l = 1;
        int r = *max_element(begin(nums),end(nums));
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(check(nums,t,mid)){
                ans = mid;
                r = mid-1;
            }
            else l = mid+1;
        }
        return ans;
    }
};