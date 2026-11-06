class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        vector<int> res(n,0);
        
        int idx = s.find(c);
        for(int i=0; i<n; i++){
            if(s[i] == c) idx = i;
            res[i] = abs(i-idx);
        }
        
        for(int i=n-1; i>=0; i--){
            res[i] = min(res[i],abs(i-idx));
            if(s[i] == c) idx = i;
        }
        return res;
    }
};