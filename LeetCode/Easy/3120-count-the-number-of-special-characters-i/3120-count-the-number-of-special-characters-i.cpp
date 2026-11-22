class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> st(word.begin(),word.end());
        unordered_set<char> seen;
        int cnt{};
        for(auto c: st){
            if(!seen.contains(tolower(c)) && !seen.contains(toupper(c)) && ((islower(c) && st.contains(toupper(c))) || (isupper(c) && st.contains(tolower(c))))){
                cnt++;
                seen.insert(tolower(c));
                seen.insert(toupper(c));
            }
        }
        return cnt;
    }
};