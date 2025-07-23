class Solution {
public:
    int fib(int n) {
        int a = 0;
        int b = 1;
        if( n==0 ){
            return a;
        }
        if( n==1 ){
            return b;
        }
        int prev1 = 0;
        int prev2 = 1;
        int curr = 0;
        for(int i = 2; i <= n; i++){
            curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
        return curr;
        
    }
};