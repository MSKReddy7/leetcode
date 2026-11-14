class Solution {
public:
    int secondsBetweenTimes(string s, string e) {
        int h = stoi(e.substr(0,2))*3600 - stoi(s.substr(0,2))*3600;
        int m = stoi(e.substr(3,2))*60 - stoi(s.substr(3,2))*60;
        int se = stoi(e.substr(6,2)) - stoi(s.substr(6,2));
        return h+m+se;
    }
};