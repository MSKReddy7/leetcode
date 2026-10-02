void gen(int r, int n, int& total,int col, int ldig, int rdig){
    if(r == n){
        total++;
        return;
    }

    for(int c=0; c<n; c++){
        if( !(col>>c & 1) && !(ldig>>(r-c+(n-1)) & 1) && !(rdig>>(r+c) & 1) ){
            gen(r+1, n, total, col | (1<<c), ldig | (1<<(r-c+(n-1))), rdig | (1<<(r+c)));
        }
    }
}

class Solution {
public:
    int totalNQueens(int n) {
        int total = 0;
        gen(0, n, total, 0, 0, 0);
        return total;
    }
};