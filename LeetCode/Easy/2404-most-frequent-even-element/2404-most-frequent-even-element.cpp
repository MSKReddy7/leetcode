class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i: nums){
            if(i&1) continue;
            mp[i]++;
        }
        int ele = -1;
        int mx = 0;

        for(auto it: mp){
            if(mx<it.second || (mx == it.second && ele>it.first)){
                ele = it.first;
                mx = it.second;
            }
        }   
        return ele;
    }
};