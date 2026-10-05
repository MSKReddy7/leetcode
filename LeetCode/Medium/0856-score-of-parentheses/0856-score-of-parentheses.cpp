class Solution {
public:
    void inc(int& n){
        if(!n) n = 1;
        n<<=1;
    }
    int scoreOfParentheses(string s) {
        int n = s.length();
        int score = 0;
        int prev = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                inc(prev);
            }
            else{
                if(s[i-1]=='(') score += prev;
                prev /= 2;
            }
        }
        return score/2;
    }
};