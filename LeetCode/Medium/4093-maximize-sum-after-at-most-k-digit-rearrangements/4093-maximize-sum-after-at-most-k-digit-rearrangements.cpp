class Solution {
public:
    long long rev(int n) {
        int cnt[10] = {};
        while(n){
            cnt[n % 10]++;
            n /= 10;
        }
        long long r = 0;
        for(int i=9; i>=0; i--) 
            while(cnt[i]--)
                r=r*10+i;
        return r;
    }
    long long maximizeSum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,long long> mp;
        for(int i : nums) mp[i] = rev(i);
        auto comp = [&](int a, int b) {
            return (mp[a]-a) > (mp[b]-b);
        };
        if(k) sort(nums.begin(),nums.end(),comp);
        long long sum = 0;
        for(auto i : nums) {
            if(k && mp[i]>i){
                sum += mp[i];
                k--;
            }
            else sum += i;
        }
        return sum;
    }
};