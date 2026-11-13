class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.length()-1;
        int res = 0;
        for(auto i: columnTitle)
            res += (int) ((i-'A'+1) * pow(26,n--));
        return res;
    }
};