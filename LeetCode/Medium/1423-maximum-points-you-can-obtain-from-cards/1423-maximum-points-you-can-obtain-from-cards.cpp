class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int totsum = accumulate(arr.begin(), arr.end(), 0);
        if(k==n) return totsum;
        
        int mx = 0;
        int csum = 0;
        
        int i=0,j=0;
        while(j<n){
            csum += arr[j];
            if(j-i+1 == n-k){
                mx = max(totsum-csum, mx);
                csum -= arr[i];
                i++;
            }
            j++;
        }
        return mx;
    }
};