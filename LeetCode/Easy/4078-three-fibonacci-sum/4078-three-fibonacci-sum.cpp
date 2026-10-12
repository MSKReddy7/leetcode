class Solution {
public:
    bool threeFibonacciSum(int n) {
        int t1=0,t2=1,t3=1;
        while(t1+t2+t3 <= n){
            if(t1+t2+t3 == n) return true;
            t1 = t2;
            t2 = t3;
            t3 = t1+t2;
        }
        return 0;
    }
};