class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sd = 0;
        int dd = 0;
        for(auto i: nums) {
            if(i<10) sd+=i;
            else dd += i;
        }
        return sd!=dd;
    }
};