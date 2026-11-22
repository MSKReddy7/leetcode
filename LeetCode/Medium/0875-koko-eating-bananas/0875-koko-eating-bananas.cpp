class Solution {
public:
    int calc(int mid,vector<int>& piles, int h){
        long long time{};
        for(auto i: piles)
            time += ceil((double)i/mid);
        return time>h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(begin(piles),end(piles));
        int ans = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(calc(mid,piles,h)) 
                l = mid+1;
            else {
                ans = mid;
                r = mid-1;
            }    
        }
        return ans;
    }
};