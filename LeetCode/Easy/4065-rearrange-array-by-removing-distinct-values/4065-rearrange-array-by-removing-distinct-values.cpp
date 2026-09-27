class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        vector<int> res;
        while(res.size()!=nums.size()){
            for(auto& i: mp){
                if(i.second){
                    res.push_back(i.first);
                    i.second--;
                }
            }
        } 
        return res;
    }
};