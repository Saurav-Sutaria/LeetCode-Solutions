class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> temp;
        int n = rectangles.size();
        for(int i=0;i<n;i++){
            temp.push_back(min(rectangles[i][0],rectangles[i][1]));
        }
        sort(temp.begin(),temp.end());
        int max = temp[n-1];
        int count = 0;
        for(int i=n-1;i>=0;i--){
            if(temp[i] == max){
                count++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};
