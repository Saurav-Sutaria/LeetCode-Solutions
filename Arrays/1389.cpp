class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        for(int i=0;i<index.size();i++){
            auto it = v.begin() + index[i];
            auto newit = v.insert(it,nums[i]);
            
        }
        return v;
        
    }
};
