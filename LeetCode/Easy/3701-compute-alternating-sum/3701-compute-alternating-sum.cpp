class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sign = 1;
        int sum = 0;
        for(auto i: nums){
            sum += i*sign;
            sign *= -1;
        }
        return sum;
    }
};