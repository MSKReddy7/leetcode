class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = (int)(log10(n)+1);

        for(; n; n/=10) 
            sum += ((sign--)%2 ? 1 : -1) * (n%10);
        
        return sum;
    }
};