bool valid(int r, int c, char val, vector<vector<char>>& board){
    for(int i=0; i<9; i++){
        if(board[i][c] == val) return false;
    }
    for(int j=0; j<9; j++){
       if(board[r][j] == val) return false; 
    }
    int sti = r/3*3;
    int stj = c/3*3;
    for(int i=sti; i<sti+3; i++){
        for(int j=stj; j<stj+3; j++){
            if(board[i][j] == val) return false;
        }
    }
    return true;
}

bool fill(vector<vector<char>>& board){
    for(int r=0; r<9; r++){
        for(int c=0; c<9; c++){
            if(board[r][c] != '.') continue;
            for(char k='1'; k<='9'; k++){
                if(!valid(r, c, k, board)) continue;
                board[r][c] = k;
                if(fill(board)) return true;
                board[r][c] = '.';
            }
            return false; 
        }
    }
    return true;
}

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        fill(board);
    }
};