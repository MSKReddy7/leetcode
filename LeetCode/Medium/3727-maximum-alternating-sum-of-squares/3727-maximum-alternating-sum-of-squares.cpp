class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        auto comp = [](int a, int b){
            return abs(a) < abs(b);
        };
        sort(nums.begin(),nums.end(),comp);
        long long sum = 0;
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                sum += nums[j]*nums[j];
                break;
            }
            sum += nums[j]*nums[j] - nums[i]*nums[i];
            i++;
            j--;
        }
        return sum;
    }
};