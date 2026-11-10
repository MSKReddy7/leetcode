class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1; 
        int carry = 0;
        while(carry || i>=0 || k){
            carry += k%10;
            if(i==-1){
                num.insert(num.begin(), carry);
                i=0;
            }
            else num[i] += carry;
            carry = num[i]/10;
            num[i] %= 10;
            k /= 10;
            i--;
        }
        return num;
    }
};