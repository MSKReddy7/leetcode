class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mn = INT_MAX;
        for(int i=0; i<n; i+=2)
            mn = min(nums[i]*(int)(pow(10,(int)(log10(nums[i+1])+1))) + nums[i+1], mn);
        return mn;
    }
};