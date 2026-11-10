class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        for(auto [n,i]: views::zip(nums,index))
            res.insert(res.begin()+i,n);
        return res;
    }
};