class Solution {
public:
    int minRotations(string s) {
        int curr = 0;
        int sum = 0;
        for(auto c: s){
            int n = c-'0';
            sum += min(abs(n-curr),10-abs(n-curr));
            curr = n;
            cout << n << ' ' << sum << endl;
        }
        return sum;
    }
};