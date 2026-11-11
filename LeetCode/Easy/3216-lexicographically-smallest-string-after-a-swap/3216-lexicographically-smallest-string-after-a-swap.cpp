class Solution {
public:
    string getSmallestString(string s) {
        int n = s.length();
        for(int i=0; i<n-1; i++){
            if(s[i]>s[i+1] && (s[i]&1) == (s[i+1]&1)){
                swap(s[i],s[i+1]);
                return s;
            }
        }
        return s;
    }
};