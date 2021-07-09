class Solution {
public:
    bool isPowerOfThree(int n) {
        //base
        if(n==0 || n==1){
            return n;
        }
        
        //recur
        bool ans = isPowerOfThree(n/3);
        if(ans == false){
            return ans;
        }
        else{
            return (n%3==0)? true:false;
        }
        
    }
};
