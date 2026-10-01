// bool isValid(int r, int c, int n){
//     for(int i=r; i>=0; i--){
//         if(grid[i][c] == 'Q') return false;
//     }
//     for(int i=r,j=c; i>=0 && j>=0; i--,j--){
//         if(grid[i][j] == 'Q') return false;
//     }
//     for(int i=r,j=c; i>=0 && j<n; i--,j++){
//         if(grid[i][j] == 'Q') return false;
//     }
//     return true;
// }


void gen(int r, int n, vector<vector<string>>& res, vector<string>& grid, vector<int>& col, vector<int>& ldig, vector<int>& rdig){
    if(r==n){
        res.push_back(grid);
        return;
    }

    for(int c=0; c<n; c++){
        if( !col[c] && !rdig[r+c] && !ldig[r-c+(n-1)]){
            grid[r][c] = 'Q';
            col[c] = rdig[r+c] = ldig[r-c+(n-1)] = 1;
            
            gen(r+1, n, res, grid, col, ldig, rdig);
            
            grid[r][c] = '.'; 
            col[c] = rdig[r+c] = ldig[r-c+n-1] = 0;
        }
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> col(n,0);
        vector<int> ldig(n*2-1,0);
        vector<int> rdig(n*2-1,0);

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