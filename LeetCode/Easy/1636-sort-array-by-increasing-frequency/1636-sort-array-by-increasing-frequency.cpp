class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto &i: nums)
            freq[i]++;
        auto comp = [&](int a, int b){
            return freq[a]==freq[b] ? a>b : freq[a]<freq[b];
        };
        sort(nums.begin(),nums.end(),comp);
        return nums;
    }
};