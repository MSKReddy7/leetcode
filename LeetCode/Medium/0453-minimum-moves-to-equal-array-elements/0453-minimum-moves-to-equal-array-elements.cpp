class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mn = *min_element(nums.begin(),nums.end());
        int ans = 0;
        for(auto& i: nums)
            ans += mn - i;
        return abs(ans);
    }
};