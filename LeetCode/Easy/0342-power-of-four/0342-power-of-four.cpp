class Solution {
public:
    bool isPowerOfFour(int n) {
        if( n<=0 || (n & n-1)) return false;
        return (int)log2(n)%2==0;
    }
};