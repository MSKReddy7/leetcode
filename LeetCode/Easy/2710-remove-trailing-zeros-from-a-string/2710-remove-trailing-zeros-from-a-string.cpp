class Solution {
public:
    string removeTrailingZeros(string num) {
        int i = num.length()-1;
        while(i && num[i] == '0') i--;
        num.resize(i+1);
        return num;
    }
};