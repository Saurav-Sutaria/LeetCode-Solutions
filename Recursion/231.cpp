class Solution {
public:
    bool isPowerOfTwo(int n) {
        //base
        if(n==0 || n==1){
            return n;
        }
        //recur
        bool ans = isPowerOfTwo(n/2);
        if(ans == false){
            return ans;
        }
        else{
            if(n % 2 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        
        
    }
};
