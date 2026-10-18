class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int bx = grid[0].size()-1;
        int by = grid.size()-1;
        set<pair<int,int>> visited = {{0,0}};
        unordered_map<char,pair<int,int>> mp = {
            {'R', {0, 1}}, 
            {'L', {0, -1}},
            {'U', {-1, 0}}, 
            {'D', {1, 0}} 
        };
        int x=0,y=0;
        while (true) {
            auto [dx, dy] = mp[grid[x][y]];
            int nx = x + dx;
            int ny = y + dy;
            if(nx<0 || ny<0 || nx>by || ny>bx || visited.contains({nx,ny})) 
                break;
            x = nx;
            y = ny;
            visited.insert({x, y});
        }
        return {x,y}; 
    }
};