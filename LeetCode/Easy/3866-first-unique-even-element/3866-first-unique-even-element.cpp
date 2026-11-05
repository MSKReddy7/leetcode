class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp.reserve(nums.size());
        for(auto &i: nums) mp[i]++;
        for(auto &i: nums){
            if((i&1) == 0 && mp[i]==1)
                return i;
        }
        return -1;
    }
};