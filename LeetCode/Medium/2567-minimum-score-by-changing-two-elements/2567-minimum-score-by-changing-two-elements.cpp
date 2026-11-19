class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        if(nums.size()<=3) return 0;
        int n = nums.size(); 
        sort(nums.begin(),nums.end());

        int res = abs(nums[0]-nums[n-1]);
        res = min(res, abs(nums[n-3]-nums[0]));
        res = min(res, abs(nums[n-2]-nums[1]));
        res = min(res, abs(nums[n-1]-nums[2]));
        return res;
    }
};