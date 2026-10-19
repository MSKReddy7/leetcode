class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();

        int less = 0;
        int equal = 0;
        for(auto i: nums){
            less += i<target;
            equal += i==target;
        }
        
        vector<int> res;
        for(int i=less; i<less+equal; i++) res.push_back(i);
        return res;
    }
};