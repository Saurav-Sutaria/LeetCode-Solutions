class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans ="";
        sort(strs.begin(),strs.end());
        for(int i=0;i<strs[0].size();i++){
            int check = 1;
            char eq = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] != eq){
                    check = 0;
                    break;
                }
            }
            if(check == 0){
                break;
            }
            if(check == 1){
                ans += strs[0][i];
            }
        }
        return ans;
    }
};
