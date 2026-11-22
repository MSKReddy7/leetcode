class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt{};
        for(auto i: hours)
            cnt += i>=target;
        return cnt;
    }
};