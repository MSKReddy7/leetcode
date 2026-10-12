class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans = {-1,-1};
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[i]>nums[j] && nums[i]+nums[j] == target && nums[i]*nums[j]>mx){
                    mx = nums[i]*nums[j];
                    ans[0] = i;
                    ans[1] = j;
                } 
            }
        }
        return ans;
    }
};