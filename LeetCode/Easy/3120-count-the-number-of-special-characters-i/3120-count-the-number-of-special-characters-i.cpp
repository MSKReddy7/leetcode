class Solution {
public:
    int numberOfSpecialChars(string word) {
        int A{},a{};
        for(auto c: word){
            if(islower(c)) a |= 1 << (c-'a');
            else A |= 1 << (c-'A');
        }
        return __builtin_popcount(A&a);
    }
};