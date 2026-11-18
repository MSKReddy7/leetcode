class Solution {
public:
    int minChanges(string s) {
        int cnt = 0;
        for(auto i=s.begin(); i!=s.end(); i+=2){
            cnt += *i != *(i+1);
        }
        return cnt;
    }
};