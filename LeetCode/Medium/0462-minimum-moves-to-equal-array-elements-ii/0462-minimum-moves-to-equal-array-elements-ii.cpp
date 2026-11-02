class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int median = nums[n/2];
        int sum = 0;
        for(auto&i: nums)
            sum += abs(i-median); 
        return sum;
    }
};