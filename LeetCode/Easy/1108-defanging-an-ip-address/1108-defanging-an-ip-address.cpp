class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto i: address){
            if(i=='.'){
                res.push_back('[');
                res.push_back('.');
                res.push_back(']');
            }
            else res.push_back(i);
        }
        return res;
    }
};