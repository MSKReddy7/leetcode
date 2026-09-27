class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        stack<int> stk;
        for(int i=0; i<n; i++){
            if(s[i]=='(') 
                stk.push(i);
            else if(s[i]==')'){
                reverse(s.begin()+stk.top()+1,s.begin()+i);
                stk.pop();
            }
        }
        string res;
        for(auto i: s)
            if(i!='(' && i!=')')
                res.push_back(i);
        return res;
    }
};