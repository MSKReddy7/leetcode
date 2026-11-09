class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int cnt{};
        unordered_map<string,int> w1;
        unordered_map<string,int> w2;
        for(auto &w: words1) w1[w]++;
        for(auto &w: words2) w2[w]++;
        for(auto &[w,c]: w1)
            cnt += c==1 && c == w2[w];
        return cnt;
    }
};