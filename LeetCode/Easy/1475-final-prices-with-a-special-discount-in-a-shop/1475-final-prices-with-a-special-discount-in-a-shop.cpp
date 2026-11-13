class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        for(int i=0; i<n-1; i++){
            int nsm = INT_MAX;
            for(int j=i+1; j<n; j++){
                if(prices[j]<=prices[i]){
                    nsm = prices[j];
                    break;
                }
            }
            if(nsm != INT_MAX)
                prices[i] -= nsm;
        }
        return prices;
    }
};