class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(!n) return 0;
        sort(nums.begin(),nums.end());
        unordered_set<int> st = {nums[0]};
        int mx = 1;
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i]-1 ==  nums[i-1]){
                st.insert(nums[i]);
                continue;
            }
            mx = max(mx, (int)st.size());
            st.clear();
            st.insert(nums[i]);
        }
        return max(mx,(int)st.size());
    }
};