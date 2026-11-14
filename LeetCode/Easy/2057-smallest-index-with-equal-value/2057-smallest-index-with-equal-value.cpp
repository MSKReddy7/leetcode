class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(auto [i,n]: views::enumerate(nums))
            if(i%10 == n)
                return i;
        return -1;
    }
};