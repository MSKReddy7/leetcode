void gen(int r, int n, vector<vector<string>>& res, vector<string>& grid, int col, int ldig, int rdig){
    if(r==n){
        res.push_back(grid);
        return;
    }

    for(int c=0; c<n; c++){
        if( !(col & (1<<c)) && !(rdig & (1<<(r+c)) ) && !(ldig & (1<<(r-c+(n-1))) )){
            grid[r][c] = 'Q';
            col |= 1<<c;
            rdig |= 1<<(r+c);
            ldig |= 1 << (r-c+(n-1));
            
            gen(r+1, n, res, grid, col, ldig, rdig);
            
            grid[r][c] = '.'; 
            col &= ~(1<<c);
            rdig &= ~(1<<(r+c));
            ldig &= ~(1 << (r-c+(n-1)));
        }
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        int col = 0;
        int ldig = 0;
        int rdig = 0;

        vector<vector<string>> res;
        vector<string> grid;

        string s;
        for(int i=0; i<n; i++) 
            s.push_back('.');
        for(int i=0; i<n; i++)
            grid.push_back(s);
            
        gen(0, n, res, grid, col, ldig, rdig);

        return res;
    }
};