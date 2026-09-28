void gen(vector<int>& nums, int idx, int n, int k, vector<vector<int>>& res, vector<int>& temp){
    if(idx == n){
        if(temp.size()==k) 
            res.push_back(temp);
        return;
    }
    if(temp.size() == k){
        res.push_back(temp);
        return;
    }
    for(int i=idx; i<n; i++){
        temp.push_back(nums[i]);
        gen(nums, i+1, n, k, res, temp);
        temp.pop_back();
    }
}

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=0; i<n; i++) nums[i] = i+1;

        vector<vector<int>> res;
        vector<int> temp;

        gen(nums, 0, n, k, res, temp);

        return res;
    }
};