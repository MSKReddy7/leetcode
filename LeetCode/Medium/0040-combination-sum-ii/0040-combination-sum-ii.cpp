void gen(vector<int>& nums, int idx, int n, int target, vector<vector<int>>& res, vector<int>& temp){
    if(!target){
        res.push_back(temp);
        return;
    }

    int prev = -1;
    for(int i=idx; i<n; i++){
        if(prev==nums[i]) continue;
        if(target-nums[i] < 0) return;

        temp.push_back(nums[i]);
        gen(nums, i+1, n, target-nums[i], res, temp);
        temp.pop_back();
        
        prev = nums[i];
    }
}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        int n = candidates.size();
        vector<vector<int>> res;
        vector<int> temp;

        gen(candidates, 0, n, target, res, temp);

        return res;
    }
};