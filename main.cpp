class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        
        for (int i = 0; i < accounts.size(); ++i) {
            vector<int> &customer = accounts[i];
            int wealth = 0;
            
            for (int j = 0; j < customer.size(); ++j) {
                wealth += customer[j];    
            }
            
            if (wealth > max) {
                max = wealth;
            }
        }
        
        return max;
    }
};
