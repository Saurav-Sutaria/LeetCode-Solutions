class Solution {
public:
    int fib(int n) {
        //base
        if(n==0 || n==1){
            return n;
        }
        
        //recur
        int fib1 = fib(n-1);
        int fib2 = fib(n-2);
        int fibo = fib1 + fib2;
        return fibo;
        
        
        
        
    }
};
