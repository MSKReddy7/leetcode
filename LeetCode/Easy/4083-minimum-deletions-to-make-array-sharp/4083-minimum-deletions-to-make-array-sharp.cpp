class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int i=0;
        while(i<n){
            while(i<n-1 && nums[i] == nums[i+1]){
               i++;
               count++;           
            }
            i++;
        }
        return count;
    }
};