class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> res;
        res.reserve(n);
        for(int i=0; i<n; i++)
            res.push_back(candies[i]+extraCandies >= *max_element(candies.begin(),candies.end()));
       return res;
    }
};