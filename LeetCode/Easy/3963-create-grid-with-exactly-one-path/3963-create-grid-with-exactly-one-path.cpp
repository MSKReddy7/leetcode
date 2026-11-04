class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res(m,string(n,'#'));
        for(int i=0; i<m; i++)
            res[i][0] = '.';
        for(int i=1; i<n; i++)
            res[m-1][i] = '.';
        return res;
        
    }
};