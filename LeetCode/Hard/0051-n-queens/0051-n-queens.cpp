bool isValid(int r, int c, vector<string>& grid, int n){
    for(int i=r; i>=0; i--){
        if(grid[i][c] == 'Q') return false;
    }
    for(int i=r,j=c; i>=0 && j>=0; i--,j--){
        if(grid[i][j] == 'Q') return false;
    }
    for(int i=r,j=c; i>=0 && j<n; i--,j++){
        if(grid[i][j] == 'Q') return false;
    }
    return true;
}

void gen(int r, int n, vector<vector<string>>& res, vector<string>& grid){
    if(r==n){
        res.push_back(grid);
        return;
    }

    for(int c=0; c<n; c++){
        if(isValid(r, c, grid, n)){
            grid[r][c] = 'Q';
            gen(r+1, n, res, grid);
            grid[r][c] = '.';
        }
    }

}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> grid;

        string s;
        for(int i=0; i<n; i++) 
            s.push_back('.');
        for(int i=0; i<n; i++)
            grid.push_back(s);
            
        gen(0, n, res, grid);

        return res;
    }
};