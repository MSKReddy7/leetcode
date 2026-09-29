class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;
        for(auto i: nums){
            vector<int> d;
            while(i){
                d.insert(d.begin(),i%10);
                i/=10;
            }
            res.insert(res.end(),d.begin(),d.end());
        }
        return res;
    }
};