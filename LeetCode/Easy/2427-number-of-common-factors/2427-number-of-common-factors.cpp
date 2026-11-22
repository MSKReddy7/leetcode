class Solution {
public:
    int commonFactors(int a, int b) {
        int cnt{};
        int Gcd = gcd(a,b);
        for(int i=1; i<=Gcd; i++)
            cnt += Gcd%i==0;
        return cnt;
    }
};