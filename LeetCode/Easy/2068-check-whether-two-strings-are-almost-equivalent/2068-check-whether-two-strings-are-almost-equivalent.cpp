class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq(26,0);
        for(auto [c1,c2]: views::zip(word1,word2)){
            freq[c1-'a']++;
            freq[c2-'a']--;
        }
        for(auto &f: freq){
            if(abs(f)>3)
                return false;
        }
        return true;
    }
};