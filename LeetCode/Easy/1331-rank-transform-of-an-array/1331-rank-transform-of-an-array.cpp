class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        int cnt = 1;
        for(auto& [k,v]: mp){
            for(auto i: v) nums[i] = cnt;
            cnt++; 
        }
        return nums;
    }
};