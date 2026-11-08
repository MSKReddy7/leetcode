class Solution {
public:
    bool check(int i, int j, int r, int c, vector<vector<int>>& grid){
        int cnt = 0;
        for(int x=0; x<r; x++){
            if(grid[x][j] && x!=i){
                cnt++;
                break;
            }
        }
        for(int x=0; x<c; x++){
            if(grid[i][x] && x!=j){
                cnt++;
                break;
            }
        }
        return cnt;
    }
    int countServers(vector<vector<int>>& grid) {
        int cnt{};
        int r = grid.size();
        for(int i=0; i<r; i++){
            int c = grid[i].size();
            for(int j=0; j<c; j++){
                // cout << grid[i][j] << ' ';
                if(grid[i][j])
                    cnt += check(i, j, r, c, grid);
            }
            // cout << endl;
        }
        return cnt;
    }
};