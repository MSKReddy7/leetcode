class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1,mp2;
        for(auto [c1,c2]: views::zip(s,t)){
            if(mp1.contains(c1) && mp1[c1]!=c2)
                return false;
            if(mp2.contains(c2) && mp2[c2]!=c1) 
                return false;
            mp1[c1] = c2;
            mp2[c2] = c1;
        }
        return true;
    }
};