class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        int cnt = 0;
        string res = "";
        for(auto i: s){
            stk.push(i);
            cnt += i=='(' ? 1 : -1;
            if(!cnt){
                string temp;
                stk.pop();
                while(stk.size()>1){
                    temp = stk.top() + temp;
                    stk.pop();
                }
                res += temp;
                stk.pop();
            }
        }
        return res;
    }
};