class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size(); 
        sort(nums.begin(),nums.end());
        while(nums.size() && nums[0]<k)
            nums.erase(nums.begin());
        return n-nums.size();
    }
};