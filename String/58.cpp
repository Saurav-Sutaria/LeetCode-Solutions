class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int last = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == ' '){
                s.erase(i);
            }
            else{
                break;
            }
        }
        int i = s.size() - 1;
        while(i >= 0){
            if(s[i] == ' '){
                break;
            }
            else{
                ans++;
            }
            i--;
        }
        return ans;
        
    }
};
