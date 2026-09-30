void gen(vector<int>& nums, int idx, int n, int target, vector<int>& temp, vector<vector<int>>& res){
    if(!target){
        res.push_back(temp);
        return;
    }

    for(int i=idx; i<n; i++){
        if(target-nums[i]<0) continue;
        temp.push_back(nums[i]);
        gen(nums, i, n, target-nums[i], temp, res);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();

        vector<vector<int>> res;
        vector<int> temp;

        gen(candidates, 0, n, target, temp, res);

        return res;
    }
};