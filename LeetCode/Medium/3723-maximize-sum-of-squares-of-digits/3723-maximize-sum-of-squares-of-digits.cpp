class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9*num) return "";
        string s(sum/9,'9');
        num -= sum/9;
        sum -= sum/9*9;
        if(num) s.push_back(sum+'0');
        if(num-1 > 0) s.append(num-1,'0');
        return s;
    }
};