class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n+1,0);
        for(auto& i: nums)
            if(i>0 && i<=n)
                arr[i] = 1;
        for(int i=1; i<=n; i++)
            if(!arr[i])
                return i;
        return n+1;
    }
};