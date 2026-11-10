class Solution {
public:
    void gen(int n, vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, vector<int>& mask){
        if(temp.size() == n){
            res.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(mask[i] || (i>0 && nums[i]==nums[i-1] && !mask[i-1])) continue;
            temp.push_back(nums[i]);
            mask[i] = 1;
            gen(n, nums, res, temp, mask);
            mask[i] = 0;
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> mask(n, 0);
        gen(n, nums, res, temp, mask);
        return res;
    }
};