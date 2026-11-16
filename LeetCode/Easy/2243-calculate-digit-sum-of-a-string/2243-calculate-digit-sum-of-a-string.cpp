class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
            string temp{};
            int sum = 0;
            int n = s.length(); 
            for(int i=0; i<n; i++){ 
                sum += s[i] - '0'; 
                if(i == n-1 || ((i+1)%k==0 && i)){
                    temp += to_string(sum);
                    sum = 0;
                } 
            }
            s = temp;
        }
        return s;
    }
};