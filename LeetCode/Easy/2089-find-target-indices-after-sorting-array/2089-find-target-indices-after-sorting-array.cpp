class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = n-1;
        int minIdx = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(nums[mid] >= target){
                if(nums[mid] == target)
                    minIdx = mid;
                r = mid-1;
            }
            else l = mid+1;
        }

        if(minIdx == -1) return {};
        vector<int> res;
        cout << minIdx;
        for(int i=minIdx; i<n && nums[i]==target; i++) res.push_back(i);
        return res;
    }
};