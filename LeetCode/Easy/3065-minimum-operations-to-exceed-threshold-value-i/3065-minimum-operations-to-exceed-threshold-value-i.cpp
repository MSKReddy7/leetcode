class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt{};
        for(auto& i: nums)
            cnt += i<k;
        return cnt;
    }
};