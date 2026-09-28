class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        int curr = 0;
        for(auto i: s){
            curr += i=='(' ? 1 : i==')' ? -1 : 0;
            mx = max(mx,curr);
        }
        return mx;
    }
};