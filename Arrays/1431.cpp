class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = 0;
        for(auto element:candies){
            m = max(m,element);
        }
        vector<bool> v;
        for(auto element:candies){
            if(element + extraCandies >= m){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;   
    }  
};
