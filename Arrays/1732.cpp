class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        partial_sum(gain.begin(),gain.end(),gain.begin());
        int m = *max_element(gain.begin(),gain.end());
        if(m < 0){
            return 0;
        }
        else{
            return m;
        }
        
    }
};
