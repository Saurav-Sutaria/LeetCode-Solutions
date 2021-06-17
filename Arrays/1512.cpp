class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int temp = 1;        
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i - 1]){
                temp++;
            }
            else{
                if(temp > 1){
                    sum += (temp*(temp - 1))/2;
                    temp = 1;
                }
            }
            
        }
        if(temp > 1){
            sum += (temp*(temp -1))/2;
        }
        return sum;
    }
};
