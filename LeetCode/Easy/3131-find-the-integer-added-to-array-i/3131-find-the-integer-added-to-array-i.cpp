class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sum = -accumulate(nums1.begin(), nums1.end(), 0);
        sum += accumulate(nums2.begin(), nums2.end(), 0);
        return sum/(int)nums1.size();
    }
};