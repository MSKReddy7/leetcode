class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mn = INT_MAX;
        for(; l<=r; l++){
            int i{},j{};
            int sum = 0;
            while(j<n){
                sum += nums[j];
                if(j-i+1 == l){
                    if(sum>0) mn = min(mn, sum);
                    sum -= nums[i++];
                }
                j++;
            }
        }
        return mn==INT_MAX ? -1 : mn;
    }
};