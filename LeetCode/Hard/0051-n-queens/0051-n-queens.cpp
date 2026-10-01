void gen(int r, int n, vector<vector<string>>& res, vector<string>& grid, int col, int ldig, int rdig){
    if(r==n){
        res.push_back(grid);
        return;
    }

    for(int c=0; c<n; c++){
        if( !(col & (1<<c)) && !(rdig & (1<<(r+c)) ) && !(ldig & (1<<(r-c+(n-1))) )){
            grid[r][c] = 'Q';
            gen(r+1, n, res, grid, col | 1<<c, ldig | 1 << (r-c+(n-1)), rdig | 1<<(r+c));
            grid[r][c] = '.'; 
        }
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> grid(n, string(n,'.'));

        gen(0, n, res, grid, 0, 0, 0);

        return res;
    }
};