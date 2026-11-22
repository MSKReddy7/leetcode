class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        int i=0;
        while(s[i]=='a') i++;
        while(s[i]=='b') i++;
        return i==n;
    }
};