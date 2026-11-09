class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n = s1.size();
        vector<vector<string>> res;
        int i=0;
        int j=0;
        while(j<n){
            while(j<n && s1[j] == s2[j]){
                i++;
                j++;
            }
            while(j<n && s1[j] != s2[j])
                j++;
            if(j-i)
                res.push_back({s1.substr(i,j-i), s2.substr(i,j-i)});
            i=j;
        }
        return res;
    }
};