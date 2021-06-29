class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int next = first;
        for(int i=0;i<encoded.size();i++){
            int temp = encoded[i]^next;
            ans.push_back(temp);
            next = temp;
        }
        return ans;
        
    }
};
