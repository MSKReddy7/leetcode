class Solution {
public:
    void gen(int n, vector<int>& nums, vector<vector<int>>& res, vector<int>& temp, int picked){
        if(temp.size() == n){
            res.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if((picked>>i&1) || (i>0 && nums[i]==nums[i-1] && !(picked>>(i-1)&1))) continue;
            temp.push_back(nums[i]);
            gen(n, nums, res, temp, picked | 1<<i);
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        gen(n, nums, res, temp, 0);
        return res;
    }
};