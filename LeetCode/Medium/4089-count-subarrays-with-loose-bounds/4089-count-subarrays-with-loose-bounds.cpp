class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long cnt = 0;
        long long i=0;
        long long j=0;
        while(j<n){
            if(nums[j]>=minK && nums[j]<=maxK){
                j++;
                continue;
            }
            cnt += (j-i)*(j-i+1)/2;
            j++;
            i=j;   
        }
        cnt += (j-i)*(j-i+1)/2;
        return cnt;
    }
};