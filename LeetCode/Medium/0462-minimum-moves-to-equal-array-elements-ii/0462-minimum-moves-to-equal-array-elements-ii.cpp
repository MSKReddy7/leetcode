class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int median = n&1 ? nums[n/2] : nums[n/2 - 1];
        int sum = 0;
        for(auto&i: nums)
            sum += abs(i-median); 
        return sum;
    }
};