class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(auto i=nums.begin(); i!=nums.end(); i++){
            if(*i <= (i+1 == nums.end() ? INT_MIN : *(i+1))) continue;
            if(*i <= (i==nums.begin() ? INT_MIN : *(i-1))) continue;
            return i-nums.begin();
        }
        return 0;
    }
};