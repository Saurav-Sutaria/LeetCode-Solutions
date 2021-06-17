class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum = 0;
        for(int i=0;i<accounts.size();i++){
            int tempsum = 0;
            for(int j=0;j<accounts[i].size();j++){
                tempsum += accounts[i][j];
            }
            maxsum = max(maxsum,tempsum);
        }
        return maxsum;
        
    }
};
