class Solution {
public:
    string finalString(string s) {
        string res;
        for(auto i: s){
            if(i == 'i') reverse(res.begin(),res.end());
            else res.push_back(i);
        }
        return res;
    }
};