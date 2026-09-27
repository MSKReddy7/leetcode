class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int a) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(!a) break;
            int prev = i ? nums[i-1] : 0;
            int curr = nums[i];
            int next = i+1<n ? nums[i+1] : 0;
            if(!curr && !prev && !next) {
                nums[i] = 1;
                a--;
            }
        }
        return !a;
    }
};