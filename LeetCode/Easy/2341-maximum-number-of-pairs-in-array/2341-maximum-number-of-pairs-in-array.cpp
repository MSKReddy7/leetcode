class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> freq(101,0);
        for(auto &i: nums) freq[i]++;
        int pairs{},left{};
        for(auto [n, c]: views::enumerate(freq)){
            pairs += c/2;
            left += c%2;
        }
        return {pairs,left};
    }
};