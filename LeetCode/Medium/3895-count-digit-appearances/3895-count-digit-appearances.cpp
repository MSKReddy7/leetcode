class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(auto &i: nums){
            while(i){
                cnt += i%10 == digit;
                i/=10;
            }
        }
        return cnt;
    }
};