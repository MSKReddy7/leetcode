class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt{};
        for(auto &i: items){
            int j = ruleKey=="type" ? 0 : ruleKey=="color" ? 1 : 2;
            cnt += i[j]==ruleValue;
        }
        return cnt;
    }
};