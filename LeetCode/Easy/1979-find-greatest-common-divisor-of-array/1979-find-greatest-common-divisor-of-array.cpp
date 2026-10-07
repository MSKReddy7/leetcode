class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto mnmx = minmax_element(nums.begin(), nums.end());
        return gcd(*mnmx.first,*mnmx.second);
    }
};