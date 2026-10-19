class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        int l = 0;
        int r = n-1;
        int idx = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] >= target){
                if(nums[mid] == target) 
                    idx = mid;
                r = mid-1;
            }
            else l = mid+1;
        }

        if(idx == -1) return {};
        
        vector<int> res;
        for(int i=idx; i<n && nums[i]==target; i++) 
            res.push_back(i);
            
        return res;
    }
};